#include <iostream>
using namespace std;

int main()
{
    const int rows = 4; // S0 from 0 to 3
    const int cols = 6; // S1 from 0 to 5
    int A[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            A[i][j] = i * cols + j;
        }
    }

    cout << "Row-Major Order:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Column-Major Order:" << endl;
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
