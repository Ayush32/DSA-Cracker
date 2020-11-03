/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];
    for (int k = 0; k < n; k++)
    {
        cin >> arr1[k];
    }

    for (int l = 0; l < m; l++)
    {
        cin >> arr2[l];
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
    return 0;
}
