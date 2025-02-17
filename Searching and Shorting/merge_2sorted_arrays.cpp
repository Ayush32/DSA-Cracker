/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */

#include <bits/stdc++.h>
using namespace std;

// Function to find next gap.
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int *arr1, int *arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);

        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m)
        {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

// Driver code
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int a1[n], a2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> a2[j];
    }
    // Function Call
    merge(a1, a2, n, m);

    for (int i = 0; i < n; i++)
        cout << a1[i] << " ";

    for (int i = 0; i < m; i++)
        cout
            << a2[i] << " ";

    return 0;
}