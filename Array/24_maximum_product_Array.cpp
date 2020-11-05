/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n)
{
    int max_val = arr[0];
    int min_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(max_val, min_val);
        }
        min_val = min(min_val * arr[i], arr[i]);
        max_val = max(arr[i], max_val * arr[i]);
        max_val = max(max_val, min_val);
    }
    return max_val;
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

    cout << maxProduct(arr, n);
    return 0;
}