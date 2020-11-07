/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;


int min(int x,int y,int z){
    return min(min(x,y),z);
}

int editDist(string s1,string s2,int m,int n){
    if(n == 0){
        return m;
    }
    if(m == 0){
        return n;
    }
    if(s1[m-1] == s2[n-1]){
        return editDist(s1,s2,m-1,n-1);
    }

    return 1 + min(editDist(s1,s2,m,n-1),editDist(s1,s2,m-1,n),editDist(s1,s2,m-1,n-1));
    }
int main() {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int m = s1.length();
    int n = s2.length();

    cout << editDist(s1,s2,m,n);
    return 0;


}