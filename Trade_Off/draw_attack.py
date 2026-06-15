import matplotlib.pyplot as plt

# 按照你要的順序，Noise 0 放第一個
noise_levels = ['Noise 0\n(0%)', 'Noise 1\n(50%)', 'Noise 2\n(60%)', 'Noise 3\n(70%)', 
                'Noise 4\n(80%)', 'Noise 5\n(90%)', 'Noise 6\n(100%)']

# N=200 數據 (實線藍色)
intervals_n200 = [
    (0.99, 1.00), # Noise 0
    (0.99, 1.00), # Noise 1
    (0.95, 0.99), # Noise 2
    (0.81, 0.90), # Noise 3
    (0.27, 0.40), # Noise 4
    (0.00, 0.01), # Noise 5
    (0.00, 0.01)  # Noise 6
]

# N=300 數據 (虛線紅色)
intervals_n300 = [
    (0.9917, 1.0000), # Noise 0
    (0.9917, 1.0000), # Noise 1
    (0.9547, 0.9895), # Noise 2
    (0.8285, 0.9045), # Noise 3
    (0.2818, 0.3881), # Noise 4
    (0.0000, 0.0083), # Noise 5
    (0.0000, 0.0083)  # Noise 6
]

# 建立圖表與畫布大小
fig, ax = plt.subplots(figsize=(8, 6))

# 逐一畫出每個區間
for i in range(len(noise_levels)):
    vmin_200, vmax_200 = intervals_n200[i]
    vmin_300, vmax_300 = intervals_n300[i]
    
    # 畫 N=200 (實線藍色，稍微加粗當作底層)
    ax.hlines(y=i, xmin=vmin_200, xmax=vmax_200, color='blue', 
              linewidth=3.5, linestyle='-', label='N=200' if i == 0 else "")
    # [加回] 藍色凸出端點
    # ax.plot([vmin_200, vmax_200], [i, i], '|', color='blue', markersize=8)
    
    # 畫 N=300 (虛線紅色，疊在藍色上方)
    ax.hlines(y=i, xmin=vmin_300, xmax=vmax_300, color='red', 
              linewidth=3.5, linestyle='-', label='N=300' if i == 0 else "")
    # [加回] 紅色凸出端點
    # ax.plot([vmin_300, vmax_300], [i, i], '|', color='red', markersize=8)

# 設定 Y 軸的刻度與對應的標籤文字
ax.set_yticks(range(len(noise_levels)))
ax.set_yticklabels(noise_levels)

# 設定標題與座標軸名稱
ax.set_xlabel('Confidence Interval for Probability of Attack Success', fontsize=12)
ax.set_ylabel('Noise Level', fontsize=12)
ax.set_title('Noise Level vs Probability of Attack Success C = 0.95', fontsize=14)

# 設定 X 軸範圍，確保區間都在畫面內
ax.set_xlim(-0.05, 1.05)

# 加入垂直網格線方便對齊數值，並將圖例放置右上角
ax.grid(axis='x', linestyle=':', alpha=0.7)
ax.legend(loc='upper right')

# 讓圖表邊距更緊湊並顯示
plt.tight_layout()
plt.savefig('noise_attack_analysis.png', dpi=300, bbox_inches='tight')
print("Attack Success Probability plot saved as 'noise_attack_analysis.png'")
# plt.show()