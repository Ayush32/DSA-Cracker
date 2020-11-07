/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

bool rotation(string s1,string s2){

    // check the length of str1 and str2 
    if(s1.length() != s2.length()){
        return false;
    }
    string temp = s1+s1;
    return (temp.find(s2) != string::npos);
}

int main() {
    string str1,str2;
    cin >> str1;
    cin >> str2;
    if(rotation(str1,str2)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;


}