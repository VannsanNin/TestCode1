#include <iostream>
#include <stack>
using namespace std;


void decimalToBinary(int decimal) {
    // Create a stack to store remainders
    stack<int> remainders;
    
    // Handle the special case of 0
    if (decimal == 0) {
        cout << "Binary representation: 0" << endl;
        return;
    }
    
    // Divide by 2 and push remainders onto stack
    int temp = decimal;
    while (temp > 0) {
        int remainder = temp % 2;
        remainders.push(remainder);
        temp /= 2;
    }
    
    // Pop the remainders from stack and print (in reverse order)
    cout << "Binary representation: ";
    while (!remainders.empty()) {
        cout << remainders.top();
        remainders.pop();
    }
    cout << endl;
}

int main() {
    int decimal;
    
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    decimalToBinary(decimal);
    
    return 0;
}