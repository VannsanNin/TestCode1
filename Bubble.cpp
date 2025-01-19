#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort Algorithm
void bubbleSort(int arr[], int size, bool ascending)
{
    // Outer loop for passes
    for (int i = 0; i < size - 1; i++)
    {
        // Inner loop for comparisons in each pass
        for (int j = 0; j < size - i - 1; j++)
        {
            // Compare adjacent elements based on sorting order
            if (ascending)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 7;
    int arr[SIZE] = {64, 34, 25, 12, 22, 11, 90};
    char choice;
    bool ascending;

    cout << "Original array: ";
    printArray(arr, SIZE);

    cout << "Choose sorting order (a for ascending, d for descending): ";
    cin >> choice;
    ascending = (choice == 'a' || choice == 'A');

    bubbleSort(arr, SIZE, ascending);

    cout << "Sorted array: ";
    printArray(arr, SIZE);

    return 0;
}