/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

bool subsetArray(int arr1[], int arr2[], int m, int n)
{
    int flag = 0;
    int i = 0;
    int j = 0;
    if (m < n)
    {
        return 0;
    }
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    while (i < n && j < m)
    {
        if (arr1[j] > arr2[i])

            j++;

        else if (arr2[j] == arr1[i])
        {
            j++;
            i++;
        }

        else if (arr1[j] < arr2[i])

            return 0;
    }
    return (i < n) ? false : true;
}

int main()
{
    int n, m;
    cin >> m >> n;

    int arr1[m];
    int arr2[n];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    if (subsetArray(arr1, arr2, m, n))
    {
        cout << " YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
