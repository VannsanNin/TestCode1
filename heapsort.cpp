// Heap Sort in C++

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    cout << "n" << n << endl;

    cout << "i=" << i << " left=" << left << " right=" << right << endl;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        cout << "arr[i]=" << arr[i] << " arr[largest]=" << arr[largest] << endl;
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}

// Print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main()
{
    // int arr[] = {1, 12, 9, 5, 6, 10};
    int arr[] = {12, 10, 4, 7, 1, 8, 9, 3, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "n=" << n << endl;
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}

// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i)
// {
//     // Find largest among root, left child and right child
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && arr[left] > arr[largest])
//     {
//         largest = left;
//     }

//     if (right < n && arr[right] > arr[largest])
//     {
//         largest = right;
//     }

//     // Swap and continue heapifying if root is not largest
//     if (largest != i)
//     {
//         cout << "arr[i] = " << arr[i] << " arr[largest] = " << arr[largest] << ", making swap: ";
//         swap(arr[i], arr[largest]);
//         for (int k = 0; k < n; ++k)
//         {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//         heapify(arr, n, largest);
//     }
// }

// // main function to do heap sort
// void heapSort(int arr[], int n)
// {
//     // Build max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(arr, n, i);
//     }

//     // Heap sort
//     for (int i = n - 1; i >= 0; i--)
//     {
//         // cout << "arr[0] = " << arr[0] << " arr[i] = " << arr[i] << ", making swap: ";
//         swap(arr[0], arr[i]);
//         for (int k = 0; k < n; ++k)
//         {
//             cout << arr[k] << " ";
//         }
//         cout << endl;

//         // Heapify root element to get highest element at root again
//         heapify(arr, i, 0);
//     }
// }

// // Print an array
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// // Driver code
// int main()
// {
//     int arr[] = {12, 10, 4, 7, 1, 8, 9, 3, 6, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Original array: ";
//     printArray(arr, n);

//     heapSort(arr, n);

//     cout << "Sorted array is\n";
//     printArray(arr, n);

//     return 0;
// }
