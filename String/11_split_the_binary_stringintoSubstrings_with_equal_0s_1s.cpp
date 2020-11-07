/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int splitNumber(string s,int n){
    int count0 =  0;
    int count1 =  0;
    int count = 0;
    for(int i = 0; i < n; i++){

        // if s[i] == '0' increment 
        if(s[i] == '0'){
            count0++;
        }
        else if(s[i] == '1'){
            count1++;
        }

        if(count0 == count1){
            count++;
        }
        
    }
    if(count0 != count1){
       return -1;
    }

    return count;

}

 int main() {
    string s;
    cin >> s;
    int n = s.length();
    cout  << splitNumber(s,n);
    return 0;
}