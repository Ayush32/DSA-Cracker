/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        while (i + 1 < n && arr1[i] == arr1[i + 1])
            i++;
        // avoiding identical elements in arr1

        while (j + 1 < m && arr2[j] == arr2[j + 1])
            j++;
        // avoiding identical elements in arr2

        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        // printing the smaller number
        // to mantain ascending order

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else
        {
            cout << arr2[j++] << " ";
            i++;
            // if arr1[i] is same as arr2[j], number is
            // printed once and i and j are incremented
        }
    }
    // loop breaks when either i or j reach end of
    // arr1 or arr2 respectively

    while (i < n)
    // printing elements of arr1 (if any left)
    {
        while (i + 1 < n && arr1[i] == arr1[i + 1])
            i++;
        // avoiding repetition

        cout << arr1[i++] << " ";
    }

    while (j < m)
    // printing elements of arr2 (if any left)
    {
        while (j + 1 < m && arr2[j] == arr2[j + 1])
            j++;
        // avoiding repetition

        cout << arr2[j++] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    findUnion(arr1, arr2, n, m);
    return 0;
}