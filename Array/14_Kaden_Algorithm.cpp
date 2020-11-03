/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

// kaden algo

int KadenAlgo(int arr[], int n)
{
    int maximum_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        current_sum = max(current_sum, arr[i]);
        maximum_sum = max(current_sum, maximum_sum);
    }
    return maximum_sum;
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
    cout << KadenAlgo(arr, n);
    return 0;
}