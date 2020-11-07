/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;
void reverseMatrix(int arr[][100], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            swap(arr[j][i], arr[k][i]);
        }
    }
}

void transpose(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotate90(int arr[][100],int m,int n){
    transpose(arr,m,n);
    reverseMatrix(arr,m,n);
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
    rotate90(arr, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}