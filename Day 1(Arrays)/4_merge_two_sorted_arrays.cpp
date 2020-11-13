/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int findGap(int gap)
{
    if (gap <= 1)

        return 0;
    return (gap / 2) + (gap % 2);
}

void mergeTwoSortedArrays(int *arr1, int *arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = findGap(gap); gap > 0; gap = findGap(gap))
    {
        for (i = 0; i + gap < n; i++)

            if (arr1[i] > arr1[gap + i])
                swap(arr1[i], arr1[gap + i]);

        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)

            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m)
        {
            for (j = 0; j + gap < m; j++)

                if (arr2[j] > arr2[gap + j])
                    swap(arr2[j], arr2[gap + j]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> a2[j];
    }
    mergeTwoSortedArrays(a1, a2, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }
    return 0;
}