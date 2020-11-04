/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

bool subArray(int arr[], int n)
{
    int sum = 0;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0 || s.find(sum) != s.end())
            return true;
        s.insert(sum);
    }
    return false;
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

    if (subArray(arr, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}