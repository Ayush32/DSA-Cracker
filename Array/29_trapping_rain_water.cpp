/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int trappingRainWater(int arr[], int n)
{
    int result = 0;
    int left_max = 0, right_max = 0;
    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {
        if (arr[lo] < arr[hi])
        {
            if (arr[lo] > left_max)

                left_max = arr[lo];
            else
                result += left_max - arr[lo];
            lo++;
        }

        else
        {
            if (arr[hi] > right_max)
                right_max = arr[hi];
            else
                result += right_max - arr[hi];
            hi--;
        }
    }
    return result;
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
    cout << trappingRainWater(arr, n);
    return 0;
}