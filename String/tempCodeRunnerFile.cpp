/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<iostream>
#include <string>
using namespace std;

int repeatingSubsequence(string s){
    int count = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    return count;
}


int main() {
    string s;
    getline(cin,s);
    cout << repeatingSubsequence(s);
    return 0;


}