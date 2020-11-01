/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void minAndMax(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[0])
        {
            min = arr[i];
        }
        if (min > arr[0])
        {
            max = arr[i];
        }
    }
    cout << "Minimum Element -> " << min << endl;
    cout << "Maximum Element -> " << max << endl;
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

    minAndMax(arr, n);
    return 0;
}