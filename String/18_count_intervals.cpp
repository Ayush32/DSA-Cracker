/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int countIntervals(string s){
    int len = s.length();
    if(len % 2){
        return -1;
    }

    stack<char>stk;
    int count  = 0;

    for(int i = 0;i<len;i++){
        if(s[i] == '}' && !stk.empty()){
            if(stk.top() == '{')
            stk.pop();
            else
            stk.push(s[i]);
        }
        else
        stk.push(s[i]);
    }
    int reduced_len = stk.size();
    int  n = 0;
    while(!stk.empty() && stk.top() == '{'){
    stk.pop();
    n++;
    }
    return (reduced_len/2 + n % 2);

}

int main() {
    string s;
    cin >> s;
    cout << countIntervals(s);
    return 0;

}