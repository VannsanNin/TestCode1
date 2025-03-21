#include <iostream>

int main()
{
    int i = 5;

    // Post-increment (i++)
    std::cout << "Initial value of i: " << i << std::endl;
    std::cout << "Post-increment (i++): " << i++ << std::endl; // Prints the value of i, then increments it
    std::cout << "Value of i after post-increment: " << i << std::endl;

    // Reset i to 5
    i = 5;

    // Pre-increment (++i)
    std::cout << "\nReset i to: " << i << std::endl;
    std::cout << "Pre-increment (++i): " << ++i << std::endl; // Increments the value of i, then prints it
    std::cout << "Value of i after pre-increment: " << i << std::endl;

    return 0;
}
