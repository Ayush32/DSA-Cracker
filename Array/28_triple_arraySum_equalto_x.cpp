/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

//  simple approach -> O(n^3)

// int tripleSum(int arr[], int n, int x)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == x)
//                 {
//                     return 1;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Efficient approach -> O(n^3)

int tripleSum(int arr[], int n, int x)
{
    int l, r;

    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == x)
            {
                return 1;
            }
            else if (arr[i] + arr[l] + arr[r] < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return 0;
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
    cout << tripleSum(arr, n, x);
    return 0;
}