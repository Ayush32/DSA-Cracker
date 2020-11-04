/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    sort(arr, arr + n);
    int min = arr[0];
    int max = arr[n - 1];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rearrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}