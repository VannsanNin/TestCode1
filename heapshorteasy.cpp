#include <iostream>
using namespace std;

int left(int i)
{
    return 2 * i + 1; // Adjusted for 0-based indexing
}

int right(int i)
{
    return 2 * i + 2; // Adjusted for 0-based indexing
}

void maxHeapify(int arr[], int heapSize, int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;

    if (l < heapSize && arr[l] > arr[i])
    {w
        largest = l;
    }
    if (r < heapSize && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, heapSize, largest);
    }
}

// Buil max heap
void buildMaxHeap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; --i)
    {
        maxHeapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    buildMaxHeap(arr, n);

    for (int i = n - 1; i > 0; --i)
    {
        swap(arr[0], arr[i]);  // Move the current largest to the end
        maxHeapify(arr, i, 0); // Restore the heap property with reduced size
    }
}

int main()
{
    int arr[] = {2, 8, 5, 3, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// int left(int i)
// {
//     return 2 * i + 1; // 0-based indexing
// }

// int right(int i)
// {
//     return 2 * i + 2; // 0-based indexing
// }

// int parent(int i)
// {
//     return (i - 1) / 2; // 0-based indexing
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void maxHeapify(int arr[], int heapSize, int i)
// {
//     int l = left(i);
//     int r = right(i);
//     int largest = i;

//     if (l < heapSize && arr[l] > arr[i])
//     {
//         largest = l;
//     }
//     if (r < heapSize && arr[r] > arr[largest])
//     {
//         largest = r;
//     }

//     if (largest != i)
//     {
//         cout << "Swapping " << arr[i] << " and " << arr[largest] << endl;
//         swap(arr[i], arr[largest]);
//         printArray(arr, heapSize); // Print array after the swap
//         maxHeapify(arr, heapSize, largest);
//     }
// }

// void buildMaxHeap(int arr[], int n)
// {
//     for (int i = (n / 2) - 1; i >= 0; --i)
//     {
//         maxHeapify(arr, n, i);
//     }
// }

// void heapSort(int arr[], int n)
// {
//     buildMaxHeap(arr, n);
//     cout << "Max-Heap built: ";
//     printArray(arr, n);

//     for (int i = n - 1; i > 0; --i)
//     {
//         cout << "Swapping " << arr[0] << " and " << arr[i] << endl;
//         swap(arr[0], arr[i]);  // Move the current largest to the end
//         printArray(arr, n);    // Print array after each swap
//         maxHeapify(arr, i, 0); // Restore the heap property
//     }
// }

// int main()
// {
//     int arr[] = {2, 8, 5, 3, 9, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, n);

//     heapSort(arr, n);

//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }
