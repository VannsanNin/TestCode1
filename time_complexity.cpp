#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Best case: Found on the first iteration (O(1))
        }
    }
    return -1; // Not found
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25}; // Target is the first element
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = linearSearch(arr, size, target);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
