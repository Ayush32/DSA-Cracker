/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>

using namespace std;

int countPairs(int arr[], int n, int k)
{
    int pair = 0;
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (arr[i] + arr[j] == k)
        {
            pair++;
        }
        i++;
        j--;
    }
    return pair;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << countPairs(arr, n, k);
    return 0;
}