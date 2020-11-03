/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>

using namespace std;

int minimizeHeight(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 9)
        {
            arr[i] = arr[i] - 2;
        }
        else
        {
            arr[i] = arr[i] + 2;
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
}