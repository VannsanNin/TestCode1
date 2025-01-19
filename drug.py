import matplotlib.pyplot as plt
import numpy as np

# Data for the survey
categories = np.array(['Against drugs', 'In favor of strict regulation', 'Neutral', 'Other responses'])
values = np.array([600, 300, 80, 20])

# Create the bar chart
fig, ax = plt.subplots()
ax.bar(categories, values, color=['#ff9999', '#66b3ff', '#99ff99', '#ffcc99'])

# Add titles and labels
ax.set_title('Survey Responses: What do young people think about drugs?')
ax.set_ylabel('Number of Respondents')
ax.set_xlabel('Response Categories')

# Save the chart
image_path = "C:/Users/Vannsan Nin/Desktop/test/1709387943_bar.png"  # Adjust this path
fig.savefig(image_path)
plt.close(fig)

# Display confirmation or use the image in notebooks
print(f"Chart saved at: {image_path}")
