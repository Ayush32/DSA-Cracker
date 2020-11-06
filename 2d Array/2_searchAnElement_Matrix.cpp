/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

bool searchElementMatrix(int arr[][100], int m, int n, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {

                return true;
            }
        }
    }
    return false;
}

int main()
{
    int m, n;

    cin >> m >> n;
    int arr[100][100];
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }
    int key;
    cin >> key;
    if (searchElementMatrix(arr, m, n, key))
    {
        cout << "Key Exist in Matrix";
    }
    else
    {
        cout << "Key Does not exist in matrix";
    }
    return 0;
}