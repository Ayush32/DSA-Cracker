/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int Findpair(int arr[],int n,int sum){
    int flag = 0;
    for(int i = 0;i<n;i++){
       
            if(abs(arr[i]-arr[i+1]) == sum)
            flag = 1;
    

    }
    if(flag == 1)
        return 1;
    else
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    cout << Findpair(arr,n,sum);
    return 0;
}