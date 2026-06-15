import modal
import os
import re

def setup_ollama():
    """在建置雲端 Image 時預先下載 32B 模型，加速後續啟動時間"""
    import subprocess
    import time

    subprocess.Popen(["ollama", "serve"])
    time.sleep(3) 

    subprocess.run(["ollama", "pull", "qwen2.5-coder:32b"], check=True)

image = (
    modal.Image.debian_slim()
    .apt_install("curl", "zstd") 
    .run_commands("curl -fsSL https://ollama.com/install.sh | sh")
    .pip_install("ollama")
    .run_function(setup_ollama)
)

app = modal.App("verilog-fixer")

@app.function(image=image, gpu="A100", timeout=3600)
def generate_fixed_code_cloud(original_code: str, max_cycles: int) -> str:

    import ollama
    import subprocess
    import time
    
    process = subprocess.Popen(["ollama", "serve"])
    time.sleep(10)
 
    combined_prompt = f"""
      You are an expert hardware security engineer. You need to implement a Probabilistic Constant-Latency countermeasure against timing side-channel attacks on the provided SystemVerilog module.

      TASK:
      Modify the module to support a probabilistic stall mechanism. The main algorithmic operation should normally take its original variable time, but with a configurable probability, it MUST stall and wait until exactly a constant number of cycles has passed before transitioning to the completion/finish state.

      CRITICAL PRESERVATION RULES (NO DELETIONS OR TRUNCATION):
      1. DO NOT delete, simplify, or omit ANY of the original datapath logic, FSM states, or counters. 
      2. You MUST perfectly preserve the original `cnt_d`, `cnt_q`, `cnt_zero`, and `div_res_zero_d` assignments exactly as they were in the original code.
      3. DO NOT use placeholders like `// rest of the code` or `// ...`. 
      4. You must output every single line of the final, complete SystemVerilog module.

      IMPLEMENTATION DETAILS:

      1. BASIC PARAMETERS & FVT PORTS (CRITICAL):
        - Change the parameter definition to: `parameter WIDTH = 63`
        - Add new input/output ports for Functional Verification Test (FVT) to the module interface: 
          `input  logic [riscv::VLEN-1:0]    pc_i,                     // for FVT`
          `output logic [riscv::VLEN-1:0]    pc_o,                     // for FVT`
        - Add internal registers in the signal declarations: `logic [riscv::VLEN-1:0] pc_q, pc_d;`
        - Datapath assignments: `assign pc_d = (load_en) ? pc_i : pc_q;` and `assign pc_o = pc_q;`
        - Inside the `always_ff` block: reset `pc_q <= '0;` and update `pc_q <= pc_d;`.

      2. LZC EXTREME VALUE BUG FIX:
        - You MUST replace the `lzc_a_input` assignment with the following exact logic to fix the extreme negative value bug:
          `assign lzc_a_input = (opcode_i[0] & op_a_sign & (op_a_i == -$signed(1)))? {{~op_a_i, 1'b1}} : (opcode_i[0] & op_a_sign) ? {{~op_a_i, 1'b0}} : op_a_i;`

      3. LATENCY COUNTER & COMPLETION FLAGS:
        - Add `localparam int CONST_LAT = {max_cycles} - 1;`.
        - Add latency counter variables: `logic [$clog2(CONST_LAT+1)-1:0] lat_cnt_q, lat_cnt_d;`
        - Add completion flags: `logic algo_done_q, algo_done_d;`
        - Add a wire to detect natural completion: `wire algo_done_now = div_res_zero_q || cnt_zero;`
        - Default assignments: Place `lat_cnt_d = lat_cnt_q;` and `algo_done_d = algo_done_q;` at the top of the FSM `always_comb` block.

      4. LFSR (TRANSACTION-SYNCHRONOUS UPDATE TO PREVENT BUTTERFLY EFFECT):
        - Add a 7-bit LFSR: `logic [6:0] lfsr_q, lfsr_d;`
        - Initialization: It MUST be initialized to `7'h1F` inside the `always_ff` block under the `~rst_ni` condition.
        - Default assignment: Place `lfsr_d = lfsr_q;` at the VERY TOP of the FSM `always_comb` block to hold its value by default.
        - Synchronous Update (CRITICAL): You MUST place the LFSR update logic `lfsr_d = {{lfsr_q[5:0], lfsr_q[6] ^ lfsr_q[5]}};` at the VERY BOTTOM of the `always_comb` block, right after the `if (flush_i)` block and just before the `end`. DO NOT OMIT THIS.

      5. STALL ENABLE LOGIC:
        - Add `logic stall_en_q, stall_en_d;`
        - Default assignment: Set `stall_en_d = stall_en_q;` at the top of the `always_comb` block.
        - Sampling Point: Inside the `IDLE` state, specifically inside the `if (in_vld_i)` block, set:
          `stall_en_d = (lfsr_q < 7'd102); // 80% stall probability`

      6. FSM STATE BEHAVIORS (CRITICAL DEADLOCK & DATA CORRUPTION PREVENTION):
        - In `IDLE`: Clear counters via `lat_cnt_d = '0;` and `algo_done_d = 1'b0;`.
        - In `DIVIDE`:
          - Step 1. Latency count: `if (lat_cnt_q != CONST_LAT-1) lat_cnt_d = lat_cnt_q + 1'b1;`
          - Step 2. DATAPATH FREEZE (CRITICAL RULE): You MUST wrap the original register enables in an `if (~algo_done_q)` condition. If you omit this, the division result will shift into oblivion (0) during the 66-cycle stall. Copy this exact block word-for-word:
            ```systemverilog
            if (~algo_done_q) begin
              if (~div_res_zero_q) begin
                a_reg_en   = ab_comp;
                b_reg_en   = 1'b1;
                res_reg_en = 1'b1;
              end
            end
            ```
          - Step 3. Record completion: `if (algo_done_now) begin algo_done_d = 1'b1; end`
          - Step 4. Main Transition: `if (algo_done_now && (~stall_en_q || (lat_cnt_q >= CONST_LAT-1))) begin state_d = FINISH; end`
          - Step 5. Early Exit: `if(div_res_zero_q && (~stall_en_q)) begin out_vld_o = 1'b1; state_d = FINISH; if(out_rdy_i) begin state_d = IDLE; end end`
        - In `flush_i` block: Ensure `lat_cnt_d = '0;` and `algo_done_d = 1'b0;` are explicitly added to reset the stall logic upon a pipeline flush.

      OUTPUT FORMAT:
      Output the ENTIRE, complete SystemVerilog code without placeholders. Wrap it in ```systemverilog ... ```.

      Original Code:
      ```systemverilog
      {original_code}
      ```
    """

    response = ollama.chat(
        model='qwen2.5-coder:32b', 
        messages=[{'role': 'user', 'content': combined_prompt}],
        options={
            'temperature': 0.0,
            'num_ctx': 8192,
            'num_predict': 4096   
        }
    )

    process.terminate()
    
    return response['message']['content']

@app.local_entrypoint()
def main():
    input_file_path = "RTL/serdiv.sv"
    output_file_path = "RTL/serdiv_fixed.sv"
    max_cycles = 66

    if not os.path.exists(input_file_path):
        print(f"no file: {input_file_path}")
        return
        
    with open(input_file_path, "r", encoding="utf-8") as f:
        original_code = f.read()

    backticks = "`" * 3
    pattern = rf"{backticks}(?:systemverilog|verilog)?(.*?){backticks}"
    match = re.search(pattern, response_text, re.DOTALL | re.IGNORECASE)

    try:
        if match:
            new_code = match.group(1).strip()
            with open(output_file_path, "w", encoding="utf-8") as f:
                f.write(new_code)
            print(f"Finish serdiv_fixed.sv: {output_file_path}")
        else:
            with open(output_file_path, "w", encoding="utf-8") as f:
                f.write(response_text)
