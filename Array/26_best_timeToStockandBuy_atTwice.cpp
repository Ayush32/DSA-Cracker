/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

int buyAndSellAtMostTwice(int price[], int n)
{
    int *profit = new int[n];
    for (int i = 0; i < n; i++)
    {
        profit[i] = 0; // store 0 in all the array
    }
    int max_price = price[n - 1];    // max element
    for (int i = n - 2; i >= 0; i--) // reverse loop right from left
    {
        if (price[i] > max_price)
        {
            max_price = price[i]; // store if max_price element is smaller than other element ans then store the max element in max price
        }
        profit[i] = max(profit[i + 1], max_price - price[i]);
    }

    int min_price = price[0]; // min element
    for (int i = 1; i < n; i++)
    {
        if (price[i] < min_price)
        {
            min_price = price[i]; // store if min_price element is smaller than other element ans then store the min element in mmin_price
        }

        profit[i] = max(profit[i - 1], profit[i] + (price[i] - min_price));
    }
    int result = profit[n - 1];
    delete[] profit;
    return result;
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
    cout << buyAndSellAtMostTwice(price, n);
    return 0;
}