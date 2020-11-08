/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int x){
   int low = 0;
   int high = n-1;
    int first = -1;

    while(low <= high){
        int mid = (low +high)/2;

        if(arr[mid] > x)
       high =  mid -1;

       else if(arr[mid] < x)
        low = mid + 1;
        else{
            first = mid;
            high = mid - 1;
            
        }
    }
    return first;
}
int LastOcc(int arr[],int n,int x){
   int low = 0;
   int high = n-1;
    int last = -1;

    while(low <= high){
        int mid = (low +high)/2;

        if(arr[mid] > x)
       high =  mid -1;
       else if(arr[mid] < x)
        low = mid + 1;
        
        

        else{
            last = mid;
            low = mid + 1;
            
        }
        
    }
    return last;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << firstOcc(arr,n,x);
    cout << endl;
    cout << LastOcc(arr,n,x);
    return 0;

}