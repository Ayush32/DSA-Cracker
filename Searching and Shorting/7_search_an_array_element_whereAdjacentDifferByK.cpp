/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int searchingEleK(int arr[],int n,int x,int k){
    int i;
    int ans = 0;
    for(i = n;i >=0;i--){
        if(arr[i] ==x){
            ans = i;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int x,k;
    cin >> x >> k;
    cout << searchingEleK(arr,n,x,k);
    return 0;
}