/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>

using namespace std;

void stringPermutation(string s){
    sort(s.begin(),s.end());

    do{
        cout << s << endl;
      }  while(next_permutation(s.begin(),s.end()));
    
}

int main() {
    string s;
    cin >> s;
    stringPermutation(s);
    return 0;

}