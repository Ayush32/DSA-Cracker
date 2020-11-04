/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <iostream>
using namespace std;

void commonElement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
            i++;

        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }
}

int main()
{
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int arr1[n1];
    int arr2[n2];
    int arr3[n3];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }
    for (int k = 0; k < n3; k++)
    {
        cin >> arr3[k];
    }

    commonElement(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}