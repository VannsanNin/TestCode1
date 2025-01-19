#include <iostream>
using namespace std;

int main()
{
    const int rows = 4; // S0 from 0 to 3
    const int cols = 6; // S1 from 0 to 5
    int A[rows][cols];

    // Loading elements into the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            A[i][j] = i * cols + j; // example value
        }
    }

    // Accessing elements in Row-Major Order and displaying the matrix form
    cout << "Matrix in Row-Major Order:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Accessing elements in Column-Major Order and displaying the matrix form
    cout << "Matrix in Column-Major Order:" << endl;
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
// #include <iostream>
// using namespace std;

// int main()
// {
//     const int rows = 4; // This aligns with S0 ranging from 0 to 3
//     const int cols = 6; // This aligns with S1 ranging from 0 to 5
//     int A[rows][cols];

//     // Loading elements into the array
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             A[i][j] = i * cols + j; // example value
//         }
//     }

//     // Accessing elements in Row-Major Order and displaying the matrix form
//     cout << "Matrix in Row-Major Order:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     // Accessing elements in Column-Major Order and displaying the matrix form
//     cout << "Matrix in Column-Major Order:" << endl;
//     for (int j = 0; j < cols; j++)
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }
