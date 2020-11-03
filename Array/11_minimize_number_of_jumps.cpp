/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int minimizeNumberOfJumps(int arr[], int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (arr[0] == 0)
    {
        return -1;
    }
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;

    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jump;
        }
        maxReach = max(maxReach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= maxReach)
                return -1;
            step = maxReach - i;
        }
    }
    return -1;
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

    cout << minimizeNumberOfJumps(arr, n);
    return 0;
}