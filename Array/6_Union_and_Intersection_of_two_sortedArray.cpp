/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n, m;
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[n];
    }

    cin >> m;
    int arr2[m];

    for (int j = 0; j < m; j++)
    {
        cin >> arr2[m];
    }

    findUnion(arr1, arr2, n, m);
    return 0;
}