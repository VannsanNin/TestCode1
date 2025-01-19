#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 6;
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i * cols + j;
        }
    }

    cout << "Row-Major Order:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Column-Major Order:" << endl;
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
