/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

string printSequence(string arr[],string s){
    string output = "";
    int n = s.length();
    for(int i = 0;i<n;i++){

        // space checking
        if(s[i] == ' '){
        output = output + '0';
        }
        // calculate index for each
        // character 
        else{
            int position = s[i] - 'A';
            output = output + arr[position];
        }
    }
    return output;
}
int main() {

    string arr[] = {"2","22","222", 
                    "3","33","333", 
                    "4","44","444", 
                    "5","55","555", 
                    "6","66","666", 
                    "7","77","777","7777", 
                    "8","88","888", 
                    "9","99","999","9999"};
    string s;
    cin >> s;
    cout << printSequence(arr,s);
    return 0;
    
}