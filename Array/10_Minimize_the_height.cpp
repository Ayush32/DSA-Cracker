/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int minimizeHeight(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 9)
        {
            arr[i] = arr[i] - k;
        }
        else
        {
            arr[i] = arr[i] + k;
        }
    }
    sort(arr, arr + n);
    int diff = abs(arr[0] - arr[n - 1]);
    return diff;
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
    int k;
    cin >> k;
    cout << minimizeHeight(arr, n, k);
    return 0;
}