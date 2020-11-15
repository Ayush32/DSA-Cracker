/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;
#define row 3
#define col 3

void rotateImage(int arr[row][col])
{
    // transpose matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse the row
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            reverse(arr[i], arr[i] + row);
        }
    }
}

int main()
{
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotateImage(arr);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}