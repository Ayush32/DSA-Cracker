/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n ;
   cin >> n;
   int arr[n];
   for(int i = 0;i<n;i++){
       cin >> arr[i];
   }

   next_permutation(arr,arr+n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;

}