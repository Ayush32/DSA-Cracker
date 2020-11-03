/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int maxSumContiguous(int arr[], int n)
{
    int maximumSum = arr[0];
    int currsum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currsum = currsum + arr[i];
        currsum = max(arr[i], currsum);
        maximumSum = max(maximumSum, currsum);
    }
    return maximumSum;
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

    cout << maxSumContiguous(arr, n);
    return 0;
}