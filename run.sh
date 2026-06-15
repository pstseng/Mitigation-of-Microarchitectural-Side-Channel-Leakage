#!/bin/bash

# 當任何一個步驟出錯時，立即停止執行後續步驟
set -e

echo "========================================="
# 第一步驟: Find leakage
echo "[Step 1] Finding leakage..."
python3 check_leakage.py

echo "-----------------------------------------"
# 第二步驟: Classify leakage
echo "[Step 2] Classifying leakage..."
python3 verification.py

echo "-----------------------------------------"
# 第三步驟: Provide solution
echo "[Step 3] Providing solution..."
modal run fix.py
python3 gen_variant.py

echo "-----------------------------------------"
# 第四步驟: Simulation attack
echo "[Step 4] Simulating attack..."
python3 run_attack_eval.py

echo "-----------------------------------------"
# 第五步驟：Trade-off
echo "[Step 5] Analyzing Trade-off..."
python3 Trade_Off/draw_attack.py
python3 Trade_Off/draw_efficient.py

echo "========================================="
echo "Finish all steps!"