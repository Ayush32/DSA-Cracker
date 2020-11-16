#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{

    if (matrix.size() == 0)
        return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + (high - low) / 2);

        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }

        if (matrix[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target;
    cin >> target;
    if (searchMatrix(matrix, target))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}