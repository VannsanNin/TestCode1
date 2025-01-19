#include <iostream>
using namespace std;

void sortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Step 1: Find the maximum element in the unsorted part
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        // Step 2: Swap the maximum element with the current element
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

int main()
{
    // Unordered array list
    int arr[] = {120, 30, 90, 500, 300, 20, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in descending order
    sortDescending(arr, n);

    // Display the sorted array
    cout << "Descending ordered array list: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
