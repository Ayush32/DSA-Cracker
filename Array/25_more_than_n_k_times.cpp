/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void appearElementNK(int arr[], int n, int k)
{
    vector<int> v;
    int appear = 0;
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans = 0;
        if (arr[i] == arr[i + 1])
        {
            appear++;
        }
        if (appear > n / k)

            cout << arr[i] << " ";
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
    int k;
    cin >> k;
    appearElementNK(arr, n, k);
    return 0;
}