/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int countSquares(int n){
    int count  = 0;
    int ans2 = 0;
    for(int i = 1;i<sqrt(n);i++){
        
        if(i * i  < n){
        count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countSquares(n);
    return 0;

}