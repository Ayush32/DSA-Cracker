/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start, end;
};

bool compare(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

void mergeInterval(Interval arr[], int n)
{
    if (n <= 0)
    {
        return;
    }

    stack<Interval> s;

    sort(arr, arr + n, compare);
    s.push(arr[0]);

    for (int i = 0; i < n; i++)
    {

        Interval top = s.top();

        if (top.end < arr[i].start)
            s.push(arr[i]);
        else if (top.end < arr[i].start)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    cout << "\n The Merged Intervals are: ";
    while (!s.empty())
    {
        Interval t = s.top();
        cout << "[" << t.start << "," << t.end << "] ";
        s.pop();
    }
    return;
}

int main()
{
    int n;
    Interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    n = sizeof(arr) / sizeof(arr[0]);
    mergeInterval(arr, n);
    return 0;
}