import os

def check_leakage(file_path):
    file_name = os.path.basename(file_path)

    instruction_name = file_name.split('_')[0] 

    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            lines = f.readlines()
            line_count = len(lines)

            if line_count > 3:
                print(f"{instruction_name} leakage")
            else:
                print(f"{instruction_name} no leakage")

target_file_path = os.path.join('Leakage', 'DIV_leakage_signature.log')

check_leakage(target_file_path)

target_file_path2 = os.path.join('Leakage', 'ADD_leakage_signature.log')

check_leakage(target_file_path2)