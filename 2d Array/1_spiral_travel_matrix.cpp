/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
#define row 4
#define col 4
using namespace std;

void spiralPrint(int arr[row][col], int m, int n)
{
    int i;
    int k = 0; //starting row
    int l = 0; //starting column
    // m -> ending row
    // n -> ending column

    while (k < m && l < n)
    {
        // print the first row
        for (i = l; i < n; i++)
        {
            cout << arr[k][i] << " ";
        }
        k++;

        // print the last column
        for (i = k; i < m; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        n--;

        // print last row
        if (m > k)
        {
            for (i = n - 1; i >= l; i--)
            {
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }

        if (n > l)
        {
            // print the last column
            for (i = m - 1; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            n--;
        }
    }
}

int main()
{
    int arr[row][col] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12},
                         {13, 14, 15, 16}};

    spiralPrint(arr, row, col);
    return 0;
}