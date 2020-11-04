/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int buyAndSell(int price[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }
    int profit = 0;

    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[i] < price[j])
            {
                int curr_profit = price[j] - price[i] + buyAndSell(price, start, i - 1) + buyAndSell(price, j + 1, end);
                profit = max(curr_profit, profit);
            }
        }
    }
    return profit;
}

int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    n = sizeof(price) / sizeof(price[0]);

    cout << buyAndSell(price, 0, n - 1);
    return 0;
}