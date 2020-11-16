/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n)
{
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        if (candidate == nums[i])
            count += 1;

        else
            count -= 1;
    }
    return candidate;
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

    cout << majorityElement(arr, n);

    return 0;
}
