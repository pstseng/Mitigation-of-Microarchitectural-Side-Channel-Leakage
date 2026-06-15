import matplotlib.pyplot as plt

# 你的 6 個 Noise Level 標籤
noise_levels = ['Noise 0', 'Noise 1', 'Noise 2', 'Noise 3', 'Noise 4', 'Noise 5', 'Noise 6']

# 請在這裡填入你對應的 6 個 Cycle 數數據 (目前為示範數據，請替換成你的真實數值)
cycle_counts = [231385, 247395, 248272, 254355, 259523, 261283, 263386]

# 建立圖表與畫布大小
fig, ax = plt.subplots(figsize=(8, 5))

# 畫出折線圖 
# marker='o' 會在資料點上畫出圓點，方便看出確切位置
# color='#ff7f0e' 設定為橘色 (你也可以改成 'blue', 'red' 等)
ax.plot(noise_levels, cycle_counts, marker='o', color='#1f77b4', linewidth=2.5, linestyle='-', markersize=8)

# 為了讓每個點的具體數值更清楚，可以直接在圖上標示出來 (選擇性功能)
for i, count in enumerate(cycle_counts):
    ax.text(i, count, f' {count}', va='bottom', ha='right', fontsize=10, color='black')

# 設定標題與座標軸名稱
ax.set_title('Required Cycles on Dhrystone across Different Noise Levels', fontsize=14)
ax.set_xlabel('Noise Level', fontsize=12)
ax.set_ylabel('Number of Cycles', fontsize=12)

# 加入網格線方便閱讀數值
ax.grid(True, linestyle='--', alpha=0.6)

# 讓圖表邊距更緊湊並顯示
plt.tight_layout()
plt.savefig('noise_efficient_analysis.png', dpi=300, bbox_inches='tight')
print("Efficient Frontier plot saved as 'noise_efficient_analysis.png'")
# plt.show()