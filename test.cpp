#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function definitions remain the same...
void LargestOfTwoNumbers() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The largest number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

void PositiveNegativeNumbers() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

void EvenOddNumbers() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}

void evaluateScore() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    if (score >= 95) {
        cout << "Excellence" << endl;
    } else if (score >= 85) {
        cout << "Very Good" << endl;
    } else if (score >= 75) {
        cout << "Good" << endl;
    } else if (score >= 60) {
        cout << "Fair" << endl;
    } else if (score >= 50) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }
}

int main() {
    // Start measuring total runtime
    auto programStart = high_resolution_clock::now();

    int choice;
    do {
        cout << "\nSelect an option:" << endl;
        cout << "1. Calculate the largest of two numbers" << endl;
        cout << "2. Calculate positive or negative number" << endl;
        cout << "3. Calculate even or odd number" << endl;
        cout << "4. Enter the score and evaluate" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Start measuring execution time for the selected operation
        auto start = high_resolution_clock::now();

        switch (choice) {
            case 1:
                LargestOfTwoNumbers();
                break;
            case 2:
                PositiveNegativeNumbers();
                break;
            case 3:
                EvenOddNumbers();
                break;
            case 4:
                evaluateScore();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        // Stop measuring execution time for the selected operation
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start);
        cout << "Execution time for this operation: " << duration.count() << " nanoseconds" << endl;

    } while (choice != 5);

    // Measure total runtime
    auto programEnd = high_resolution_clock::now();
    auto totalDuration = duration_cast<seconds>(programEnd - programStart);
    cout << "\nTotal runtime of the program: " << totalDuration.count() << " seconds" << endl;

    return 0;
}



// #include <iostream>
// using namespace std;

// // ក.គណនារកចំនួនធំបំផុតនៃ ២ ចំនួន។
// void LargestOfTwoNumbers() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     if (num1 > num2) {
//         cout << "The largest number is: " << num1 << endl;
//     } else if (num2 > num1) {
//         cout << "The largest number is: " << num2 << endl;
//     } else {
//         cout << "Both numbers are equal." << endl;
//     }
// }

// // ខ.គណនារកលេខវិជ្ជមាន(positive) និងលេខអវិជ្ជមាន(negative)។
// void PositiveNegativeNumbers() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num > 0) {
//         cout << "The number is positive." << endl;
//     } else if (num < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }
// }

// // គ.គណនារកលេខគូ​(even) និងលេខសេស(odd)។
// void EvenOddNumbers() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "The number is even." << endl;
//     } else {
//         cout << "The number is odd." << endl;
//     }
// }

// // ឃ.បញ្ចូលពិន្ទុ និងវាយតម្លៃនិទ្ទេសតាមលក្ខខណ្ឌដូចខាងក្រោម៖
// void evaluateScore() {
//     int score;
//     cout << "Enter the score: ";
//     cin >> score;

//     if (score >= 95) {
//         cout << "Excellence" << endl;
//     } else if (score >= 85) {
//         cout << "Very Good" << endl;
//     } else if (score >= 75) {
//         cout << "Good" << endl;
//     } else if (score >= 60) {
//         cout << "Fair" << endl;
//     } else if (score >= 50) {
//         cout << "Passed" << endl;
//     } else {
//         cout << "Failed" << endl;
//     }
// }

// int main() {
//     int choice;
//     do {
//         cout << "\nSelect an option:" << endl;
//         cout << "1. Calculate the largest of two numbers" << endl;
//         cout << "2. Calculate positive or negative number" << endl;
//         cout << "3. Calculate even or odd number" << endl;
//         cout << "4. Enter the score and evaluate" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 LargestOfTwoNumbers();
//                 break;
//             case 2:
//                 PositiveNegativeNumbers();
//                 break;
//             case 3:
//                 EvenOddNumbers();
//                 break;
//             case 4:
//                 evaluateScore();
//                 break;
//             case 5:
//                 cout << "Exiting the program." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 5);

//     return 0;
// }
