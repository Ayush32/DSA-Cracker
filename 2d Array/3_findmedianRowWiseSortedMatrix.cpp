/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

int findMediansortRowWise(int mat[][100], int r, int c)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (mat[i][0] < min)
            min = mat[i][0];

        if (mat[i][c - 1] > max)
            max = mat[i][c - 1];
    }
    int desired = (r * c + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int place = 0;

        for (int i = 0; i < r; i++)

            place += upper_bound(mat[i], mat[i] + c, mid) - mat[i];
        if (place < desired)

            min = mid + 1;

        else

            max = mid;
    }
    return min;
}

int main()
{
    int m, n;

    cin >> m >> n;
    int mat[100][100];
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> mat[row][col];
        }
    }

    cout << findMediansortRowWise(mat, m, n);
    return 0;
}