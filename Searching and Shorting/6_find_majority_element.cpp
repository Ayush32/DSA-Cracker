/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

void majorityElement(int arr[],int n){
 
    int ans = 0;
    int ans2 = 0;
    int temp[n] = {0};

    int size = sizeof(temp)/sizeof(temp[0]);
    
    for(int i = 0;i<n;i++){
        if(temp[arr[i]] == 0){
            temp[arr[i]]= 1;
        
          
        }
        if(temp[arr[i]] == 1){
            ans  = arr[i];
        }
    }
    for(int i = 0;i<size;i++){
        if(temp[i] == 0){
            ans2 = temp[i]; 
        }
    }

}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];

    }
 majorityElement(arr,n);
    return 0;
}