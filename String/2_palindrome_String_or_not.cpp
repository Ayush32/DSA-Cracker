/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

bool palindromeString(string s){
    string s1 = s;
    reverse(s1.begin(),s1.end());

    if(s1==s){
        return true;
    }
    else{
        return false;
    }
}

// 2nd method

bool palindromeStringMethod2(string s){
        int start = 0;
        int end = s.length()-1;
        int i = 0;
        int flag = 0;
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        
        }
        return true;
        
}

int main() {
    string s;
    cin >> s;

    if(palindromeString(s)){
        cout << "1";
    }
    else{
        cout << "0";
    }
    cout<<endl;
    if(palindromeStringMethod2(s)){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}
