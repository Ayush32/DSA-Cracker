/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= x)

                k--;

            else
            {
                count += (k - j);
                j++;
            }
        }
    }
    return count;
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
    int x;
    cin >> x;
    cout << countTriplets(arr, n, x);

    return 0;
}