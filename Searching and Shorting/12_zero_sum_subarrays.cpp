/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void zeroSumSubarrays(int arr[], int n)
{
    int *prod = new int[n];
    prod[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prod[i] = prod[i - 1] * arr[i - 1];
    }
    int temp = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        prod[i] *= arr[i + 1] * temp;
        temp *= arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }
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

    zeroSumSubarrays(arr, n);

    return 0;
}