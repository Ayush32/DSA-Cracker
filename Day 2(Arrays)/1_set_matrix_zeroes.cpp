/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int col0 = 1;
    int rows = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;

        for (int j = 1; j < col; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0)
            matrix[i][0] = 0;
    }
}

int main()
{
    vector<vector<int>> matrix = {{
                                      1,
                                      1,
                                      1,
                                  },
                                  {1, 0, 1},
                                  {1, 1, 1}};
    cout << setZeroes(matrix);
    return 0;
}