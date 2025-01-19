import matplotlib.pyplot as plt
import numpy as np

# Define input sizes
n = np.linspace(1, 50, 400)

# Define f(n) and g(n)
f_n = 2 * n**2 + 5 * n + 10  # Actual runtime
g_n = n**2  # Growth rate

# Define constants for bounds
c1 = 0.5  # Lower bound constant
c2 = 3    # Upper bound constant

# Define c1g(n) and c2g(n)
c1_g_n = c1 * g_n
c2_g_n = c2 * g_n

# Plot the functions
plt.figure(figsize=(10, 6))
plt.plot(n, f_n, label='f(n) (Actual Runtime)', color='blue', linewidth=2)
plt.plot(n, c1_g_n, label='c1g(n) (Lower Bound)', color='green', linestyle='--', linewidth=2)
plt.plot(n, c2_g_n, label='c2g(n) (Upper Bound)', color='red', linestyle='--', linewidth=2)

# Customize the graph
plt.title("Theta Notation (Θ): f(n) Between c1g(n) and c2g(n)")
plt.xlabel("Input Size (n)")
plt.ylabel("Operations / Time")
plt.legend()
plt.grid(True)

# Show the plot
plt.show()
