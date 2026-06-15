import os
import re

PROB_MAPPING = {
    0:   "stall_en_d = 1'b0;                                // 0% stall",
    10:  "stall_en_d = (lfsr_q < 7'd13)  ? 1'b1 : 1'b0;     // 10% stall",
    20:  "stall_en_d = (lfsr_q < 7'd25)  ? 1'b1 : 1'b0;     // 20% stall",
    30:  "stall_en_d = (lfsr_q < 7'd38)  ? 1'b1 : 1'b0;     // 30% stall",
    40:  "stall_en_d = (lfsr_q < 7'd51)  ? 1'b1 : 1'b0;     // 40% stall",
    50:  "stall_en_d = (lfsr_q < 7'd64)  ? 1'b1 : 1'b0;     // 50% stall",
    60:  "stall_en_d = (lfsr_q < 7'd76)  ? 1'b1 : 1'b0;     // 60% stall"
    # 70:  "stall_en_d = (lfsr_q < 7'd89)  ? 1'b1 : 1'b0;     // 70% stall",
    # 80:  "stall_en_d = (lfsr_q < 7'd102) ? 1'b1 : 1'b0;     // 80% stall",
    # 90:  "stall_en_d = (lfsr_q < 7'd115) ? 1'b1 : 1'b0;     // 90% stall",
    # 100: "stall_en_d = 1'b1;                                // 100% stall"
}

input_file = "RTL/serdiv_fixed.sv" 
output_dir = "RTL"  

if not os.path.exists(input_file):
    print(f"❌ 錯誤：找不到基準檔案 {input_file}，請確認檔名是否正確。")
    exit()

# 建立輸出資料夾
os.makedirs(output_dir, exist_ok=True)

with open(input_file, "r", encoding="utf-8") as f:
    orig_content = f.read()

target_pattern = r"stall_en_d\s*=\s*\(lfsr_q\s*<\s*7'd102\)\;.*"

for prob, new_line in PROB_MAPPING.items():

    modified_content = re.sub(target_pattern, new_line, orig_content)

    out_filename = f"Noise{prob//10}.sv"
    out_filepath = os.path.join(output_dir, out_filename)
    
    with open(out_filepath, "w", encoding="utf-8") as f:
        f.write(modified_content)
        
    print(f"Finish {out_filepath}")
