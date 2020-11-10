/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int findCandidate(int arr[],int n){
   int maj_index = 0,count = 1;
    for(int i = 0;i<n;i++){
        if(arr[maj_index] == arr[i])
            count++;
        
        else
        count--;

        if(count == 0){
            maj_index = i;
           count  = 1;
        }
    }
   return arr[maj_index];
}

int majorityElement(int arr[],int n,int cand){
    int count = 0;
    for(int i = 0;i<n;i++){
    if(arr[i] == cand)
    count++;
    }
    if(count > n/2)
        return cand;
    
    else
    return -1;
    
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];

    }
    int cand = findCandidate(arr,n);
 cout << majorityElement(arr,n,cand);
    return 0;
}