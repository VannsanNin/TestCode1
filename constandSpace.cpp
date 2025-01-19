#include <iostream>
using namespace std;

// Function to swap two variables
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to check if an array is sorted
bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Example for swapping two variables
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    // Example for checking if an array is sorted
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << size << endl;
    if (isSorted(arr, size))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
