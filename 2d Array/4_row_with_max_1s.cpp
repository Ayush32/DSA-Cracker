/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int binarySearch(bool arr[], int low, int high)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid - 1] == 0) && arr[mid] == 1)
            return mid;
        else if (arr[mid] == 0)
            return binarySearch(arr, (mid + 1), high);
        else
            return binarySearch(arr, low, mid - 1);
    }
    return -1;
}

int rowWithMax1(bool arr[][100], int m, int n)
{
    int max_row_index = 0;
    int max = -1;
    int i, index;
    for (int i = 0; i < m; i++)
    {
        index = binarySearch(arr[i], 0, n - 1);
        if (index != -1 && n - index > max)
        {
            max = n - index;
            max_row_index = i;
        }
    }
    return max_row_index;
}

int main()
{
    int m, n;

    cin >> m >> n;
    bool arr[100][100];
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << rowWithMax1(arr, m, n);
    return 0;
}
