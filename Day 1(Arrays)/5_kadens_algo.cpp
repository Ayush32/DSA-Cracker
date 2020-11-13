/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int kadenAlgo(int arr[], int n)
{
    int Currentsum = 0;
    int maximumSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        Currentsum += arr[i];

        if (Currentsum < 0)
            Currentsum = 0;

        if (Currentsum > maximumSum)
            maximumSum = max(Currentsum, maximumSum);
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
    cout << kadenAlgo(arr, n);
    return 0;
}