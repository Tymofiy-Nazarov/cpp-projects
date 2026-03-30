#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int n = 4;
    const int m = 4;
    int A[n][m];
    A[0][0] = 11;
    A[0][1] = 12;
    A[0][2] = 13;
    A[0][3] = 14;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = (i + 1) * 10 + j + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout <<A[i][m-1] << endl;
    }
    int* B = new int[m];
    delete[] B;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = (i + 1) * 10 + j + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << matrix[i][m - 1] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    



}
