# import matplotlib.pyplot as plt
# import numpy as np

# # Define input sizes
# n = np.linspace(1, 50, 400)  # Input size from 1 to 50

# # Define complexities
# O_1 = np.ones_like(n)
# O_log_n = np.log2(n)
# O_n = n
# O_n_log_n = n * np.log2(n)
# O_n2 = n**2
# O_2n = 2**n

# # Plot the curves
# plt.figure(figsize=(10, 6))
# plt.plot(n, O_1, label='O(1)', color='blue')
# plt.plot(n, O_log_n, label='O(log n)', color='orange')
# plt.plot(n, O_n, label='O(n)', color='green')
# plt.plot(n, O_n_log_n, label='O(n log n)', color='red')
# plt.plot(n, O_n2, label='O(n^2)', color='purple')
# plt.plot(n, O_2n, label='O(2^n)', color='brown')

# # Customize the graph
# plt.ylim(0, 100)  # Limit y-axis for better visualization
# plt.title("Big O Notation")
# plt.xlabel("Input Size (n)")
# plt.ylabel("Operations")
# plt.legend()
# plt.grid(True)

# # Show the plot
# plt.show()
import matplotlib.pyplot as plt
import numpy as np

# Define input sizes
n = np.linspace(1, 50, 400)  # Input size from 1 to 50

# Define f(n) and cg(n)
f_n = n**2 + 5*n + 10  # Example actual runtime function
g_n = n**2  # Big O notation (upper bound)

# Define a constant c
c = 2  # This constant is arbitrary and depends on your case
cg_n = c * g_n  # Upper bound multiplied by c

# Plot the functions
plt.figure(figsize=(10, 6))
plt.plot(n, f_n, label='f(n)', color='blue', linewidth=2)
plt.plot(n, cg_n, label='cg(n)', color='red', linestyle='--', linewidth=2)

# Customize the graph
plt.title("Big O Notation: f(n) vs cg(n)")
plt.xlabel("Input Size (n)")
plt.ylabel("Operations / Time")
plt.legend()
plt.grid(True)

# Show the plot
plt.show()
