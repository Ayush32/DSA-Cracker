/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void mergeArray(int arr1[], int arr2[], int n, int m)
{
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (arr1[i] >= arr2[j])
        {
            swap(arr1[i], arr2[j]);
        }
        else
        {
            break;
        }
        i--;
        j++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    mergeArray(arr1, arr2, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < m; j++)
    {
        cout << arr2[j] << " ";
    }
    return 0;
}