#include <iostream>
#include <vector>
using namespace std;

void copyArray(int arr[], int size)
{
    vector<int> copy; // Uses extra space proportional to the input size
    for (int i = 0; i < size; i++)
    {
        copy.push_back(arr[i]);
    }
    cout << "Copied Array: ";
    for (int i : copy)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    copyArray(arr, size); // Requires linear space for copying
    return 0;
}
