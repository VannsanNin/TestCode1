#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main()
{
    vector<int> arr = {5, 3, 8, 4, 2};
    int target = 2; // Worst case: target is the last element
    int result = linearSearch(arr, target);
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
