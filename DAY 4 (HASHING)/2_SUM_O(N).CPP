/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> arr, int n, int target)
{
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(target - arr[i]) != mpp.end())
        {
            ans.push_back(mpp[target - arr[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[arr[i]] = i;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
}