/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void sideNegative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);

            j++;
        }
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
    sideNegative(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}