def classify_leakage_instruction(instruction):
    inst = instruction.strip().lower()

    operation_insts = {"add", "sub", "mul", "div", "divu", "rem", "remu", "sll", "srl", "and", "or", "xor"}
    branch_insts    = {"beq", "bne", "blt", "bge", "bltu", "bgeu", "jal", "jalr"}
    load_store_insts= {"lb", "lh", "lw", "ld", "sb", "sh", "sw", "sd"}

    if inst in operation_insts:
        category = "Operation (Arithmetic/Logic)"
        module = "ALU / Multiplier / Divider"
        fix_advice = "Implement strict constant-time execution"
        
    elif inst in branch_insts:
        category = "Branch (Control Flow)"
        module = "Branch Unit / Branch Predictor"
        fix_advice = "軟體層面改用無分支 (Branchless) 寫法，或硬體層面加入隨機延遲。"
        
    elif inst in load_store_insts:
        category = "Load/Store (Memory Access)"
        module = "LSU / Data Cache"
        fix_advice = "軟體層面使用常數時間查表，或硬體層面啟用 Cache Partitioning。"
        
    else:
        category = "Unknown / Unclassified"
        module = "N/A"
        fix_advice = "請手動檢查該指令特性。"

    return {
        "Instruction": inst.upper(),
        "Category": category,
        "Target_Module": module,
        "Advice": fix_advice
    }

if __name__ == "__main__":

    test_instructions = ["DIV"]

    for inst in test_instructions:
        result = classify_leakage_instruction(inst)
        print(f"Instruction: {result['Instruction']}")
        print(f"  -> Category: {result['Category']}")
        # print(f"  -> Module: {result['Target_Module']}")
        print(f"  -> Advice: {result['Advice']}")