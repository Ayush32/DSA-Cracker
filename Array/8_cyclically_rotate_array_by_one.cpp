/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int m)
{
    int x = arr[m - 1], i;
    for (i = m - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = sizeof(arr) / sizeof(arr[0]);

    rotate(arr, m);
    for (int j = 0; j < m; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}