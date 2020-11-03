/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>

using namespace std;

int duplicate(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    int dup = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            if (count != 0)
                dup = arr[i];
        }
    }
    return dup;
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

    cout << duplicate(arr, n);
    return 0;
}