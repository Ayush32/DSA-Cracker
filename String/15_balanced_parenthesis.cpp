/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

bool balanceParanthesis(string s){
    stack<char>stk;

    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            stk.push(c);
        }
        else{
            if(stk.empty()){
                return false;
            }
            else if(c == ')' && stk.top() != '('){
                return false;
            }
            else if(c == '}' && stk.top() != '{'){
                return false;
            }
            else if(c == ']' && stk.top() != '['){
                return false;
            }
            stk.pop();
        }

    }
    return stk.empty();
}



int main() {
    char str[100];
    cin.getline(str,100);
    if(balanceParanthesis(str)){
        cout << "Balanced";
    }
    else{
        cout << "Not Balanced";
    }
    return 0;
}