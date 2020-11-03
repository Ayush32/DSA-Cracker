/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void nextPermuation(int arr[], int n)
{
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

    next_permutation(arr, arr + n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
