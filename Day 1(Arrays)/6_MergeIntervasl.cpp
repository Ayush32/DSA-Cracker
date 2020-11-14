/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> mergeIntervals;
    if (intervals.size() == 0)
    {
        return mergeIntervals;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempIntervals = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempIntervals[1])
        {
            tempIntervals[1] = max(it[1], tempIntervals[1]);
        }
        else
        {
            mergeIntervals.push_back(tempIntervals);
            tempIntervals = it;
        }
    }
    mergeIntervals.push_back(tempIntervals);
    return mergeIntervals;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {8, 9}, {9, 11}, {15, 18}, {2, 4}, {16, 17}};
    cout << merge(intervals);
    return 0;
}