import pandas as pd
import matplotlib.pyplot as plt

# Set dark theme style
plt.style.use('dark_background')

# Read the CSV file
df = pd.read_csv('process_schedule.csv')

# Create a figure with dark background
fig, ax = plt.subplots(figsize=(12, 6), facecolor='#1c1c1c')

# High-contrast color palette (add more colors if needed)
high_contrast_colors = [
    '#ff0000', '#00ff00', '#ffff00', '#00ffff',
    '#ff00ff', '#ffa500', '#7fff00', '#ff69b4',
    '#00bfff', '#ffd700'
]

# Plot each process as a horizontal bar
for _, row in df.iterrows():
    ax.hlines(y=row['pid'], 
             xmin=row['start_time'], 
             xmax=row['end_time'], 
             linewidth=10,
             color=high_contrast_colors[row['pid'] % len(high_contrast_colors)])

# Customize the plot
ax.set_title('Process Schedule Timeline', color='white', fontsize=14, pad=20)
ax.set_xlabel('Time', color='white', fontsize=12)
ax.set_ylabel('Process ID', color='white', fontsize=12)

# Set grid style
ax.grid(True, axis='x', linestyle='--', alpha=0.4, color='#a0a0a0')

# Adjust y-axis
unique_pids = df['pid'].unique()
ax.set_yticks(unique_pids)
ax.tick_params(axis='both', colors='white')

# Create legend with dark background
legend_labels = [f'Process {pid}' for pid in unique_pids]
legend = ax.legend(legend_labels, 
                 bbox_to_anchor=(1.05, 1), 
                 loc='upper left',
                 facecolor='#2c2c2c',
                 edgecolor='white',
                 labelcolor='white')

# Adjust layout and save
plt.tight_layout()
plt.savefig('process_schedule_dark.png', 
           facecolor=fig.get_facecolor(), 
           dpi=300,
           bbox_inches='tight')
plt.show()