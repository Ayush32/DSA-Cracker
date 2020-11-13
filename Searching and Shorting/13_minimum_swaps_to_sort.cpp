/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int minimumSwapsSort(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                swap(arr[i], arr[j + 1]);
                count++;
            }
        }
    }
    return count;
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
    cout << minimumSwapsSort(arr, n);
    return 0;
}