import os
import re
import shutil
import subprocess

# ==================== Path Configuration ====================
# Get the absolute path of the directory where the script is located
BASE_DIR = os.path.dirname(os.path.abspath(__file__))

RTL_NOISE_DIR = os.path.join(BASE_DIR, "RTL")
CVA6_SERDIV_PATH = os.path.join(BASE_DIR, "cva6", "core", "serdiv.sv")
TB_DIR = os.path.join(BASE_DIR, "cva6", "corev_apu", "tb", "tb_serdiv")
OBJ_DIR = os.path.join(TB_DIR, "obj_dir")
ATTACK_TEST_FILE = os.path.join(TB_DIR, "hdl", "attack2_test.sv")
RESULT_FILE = os.path.join(BASE_DIR, "attack_result.txt")

# Verilator compilation command
VERILATOR_CMD = [
    "verilator", "-Wall", "--Wno-fatal", "--sv", "--binary", "--timing",
    "-f", "tb.verilator.list",
    "-Ihdl", "-I../common", "-I../../core/include",
    "--top-module", "tb"
]

# ==================== Utility Functions ====================
def modify_num_secrets(target_val):
    """Modify int NUM_SECRETS = X; in attack2_test.sv"""
    print(f"\nModifying NUM_SECRETS to {target_val}...")
    with open(ATTACK_TEST_FILE, "r", encoding="utf-8") as f:
        content = f.read()
    
    # Use regex for precise numerical replacement
    pattern = r"int\s+NUM_SECRETS\s*=\s*\d+;"
    new_line = f"int NUM_SECRETS = {target_val};"
    modified_content = re.sub(pattern, new_line, content)
    
    with open(ATTACK_TEST_FILE, "w", encoding="utf-8") as f:
        f.write(modified_content)

def run_evaluation(num_secrets):
    """Run the complete evaluation process for Noise1 to Noise10"""
    with open(RESULT_FILE, "a", encoding="utf-8") as res_f:
        res_f.write(f"\n=== NUM_SECRETS = {num_secrets} ===\n")
    
    for i in range(1, 7):
        noise_file = os.path.join(RTL_NOISE_DIR, f"Noise{i}.sv")
        print(f"\n[Evaluating] Noise{i}.sv | NUM_SECRETS = {num_secrets}")
        
        # 1. Copy the Noise file to cva6/core/serdiv.sv
        if not os.path.exists(noise_file):
            print(f"  ❌ Source file not found: {noise_file}, skipping.")
            continue
        shutil.copy(noise_file, CVA6_SERDIV_PATH)
        
        # 2. Run Verilator compilation
        print(f" Compiling...")
        try:
            subprocess.run(VERILATOR_CMD, cwd=TB_DIR, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
        except subprocess.CalledProcessError as e:
            print(f"  ❌ Verilator compilation failed! Error message:\n{e.stderr.decode()}")
            continue
            
        # 3. Run simulation and redirect to log
        print(f" Running simulation...")
        log_file_path = os.path.join(OBJ_DIR, "tb_serdiv.log")
        
        # Set LD_LIBRARY_PATH=. and execute ./Vtb
        current_env = os.environ.copy()
        current_env["LD_LIBRARY_PATH"] = "."
        
        try:
            with open(log_file_path, "w") as log_f:
                subprocess.run(["./Vtb"], cwd=OBJ_DIR, env=current_env, stdout=log_f, check=True)
        except subprocess.CalledProcessError:
            print(f"  ❌ Error occurred during simulation, please check {log_file_path}")
            
        # 4. Read Log and extract data
        matches_val = "N/A"
        if os.path.exists(log_file_path):
            with open(log_file_path, "r", encoding="utf-8") as log_f:
                log_content = log_f.read()
                # Search for "Total Exact Matches: X / Y"
                match = re.search(r"Total Exact Matches:\s*(\d+)\s*/\s*" + str(num_secrets), log_content)
                if match:
                    matches_val = match.group(1)
                    # print(f"  🎯 Successfully extracted data: Total Exact Matches: {matches_val} / {num_secrets}")
                else:
                    print(f"  ⚠️ Expected 'Total Exact Matches: X / {num_secrets}' format not found in Log")
        
        # 5. Write to result file
        with open(RESULT_FILE, "a", encoding="utf-8") as res_f:
            res_f.write(f"Noise{i}: {matches_val}\n")

if __name__ == "__main__":
    # Initialize the result file (overwrite if it exists)
    with open(RESULT_FILE, "w", encoding="utf-8") as f:
        f.write("================ Attack Evaluation Results ================\n")
        
    try:
        # First round: NUM_SECRETS = 200
        modify_num_secrets(200)
        run_evaluation(200)
        
        # Second round: NUM_SECRETS = 300
        modify_num_secrets(300)
        run_evaluation(300)
        
        print(f"\n🎉 All experiments completed! Results saved to: {RESULT_FILE}")
        
    finally:
        # Restore the code back to default 200 after experiments to avoid dirty Git state
        modify_num_secrets(200)