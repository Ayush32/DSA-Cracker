/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

void printSubStr(string str, int low, int high){
    for(int i = low;i<=high;i++){
        cout << str[i];
    }
}

int longestPalSubstr(string str){
    int n  = str.size();
    // table[i][j] will be false if substring
    // str[i..j] is not palindrome
    // else table[i][j] wil be true;
    bool table[n][n];

    memset(table, 0,sizeof(table));

    // all substring of length 1
    // are palindromes

    int maxLength= 1;
    for(int i = 0;i<n;i++)
        table[i][i] = true;

    // check for sub string of length 2.
    int start = 0;
    for(int i = 0;i < n-1;i++){
        if(str[i] == str[i + 1]){
            table[i][i+1] = true;
            start = i;
            maxLength =2;
        }
    }

    // check for substring of length than 2.
    // k is length of substring 

    for(int k= 3;k <= n;k++){
        // fix the starting index
        for(int i = 0;i<n-k+1;i++){
            int j = i + k -1;

            if(table[i + 1][j-1] && str[i] == str[j]){
            table[i][j] = true;
            if( k > maxLength ){
                start = i;
                maxLength  = k;
            }
            }
        }
    }
    printSubStr(str,start,start+maxLength-1);
    return maxLength;
}

int main() {
    string s;
    cin >> s;

    cout << longestPalSubstr(s);
    return 0;
    
}

