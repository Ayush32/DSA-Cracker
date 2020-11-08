/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int valueEqualToIndex(int arr[],int n){
    int ans =0;
    for(int i = 0;i<n;i++){
        if(arr[i] == i){
            return i;
        }
    }
    return 0;

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << valueEqualToIndex(arr,n);
    return 0;
}