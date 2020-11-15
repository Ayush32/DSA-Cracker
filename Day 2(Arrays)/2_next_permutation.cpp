/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n)
{
    int size = n;
    int i, j;
    for (i = size - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            break;
        }
    }
    if (i < 0)
    {
        reverse(arr, arr + n);
    }
    else
    {
        for (j = size - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                break;
            }
        }
        swap(arr[i], arr[j]);
        reverse(arr + i + 1, arr + n);
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

    nextPermutation(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
