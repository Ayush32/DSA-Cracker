/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include <bits/stdc++.h>
using namespace std;

// Function to find the word 
string secMostRepeated(vector<string> seq) 
{ 
  
    // Store all the words with its occurrence 
    unordered_map<string, int> occ; 
    for (int i = 0; i < seq.size(); i++) 
        occ[seq[i]]++; 
  
    // find the second largest occurrence 
    int first_max = INT_MIN, sec_max = INT_MIN; 
    for (auto it = occ.begin(); it != occ.end(); it++) { 
        if (it->second > first_max) { 
            sec_max = first_max; 
            first_max = it->second; 
        } 
  
        else if (it->second > sec_max &&  
                 it->second != first_max) 
            sec_max = it->second; 
    } 
  
    // Return string with occurrence equals 
    // to sec_max 
    for (auto it = occ.begin(); it != occ.end(); it++) 
        if (it->second == sec_max) 
            return it->first; 
} 
int main() {
    
    vector<string>seq = {"aaa","ccc","aaa","ccc","ddd","aaa"};

    cout << secMostRepeated(seq);
    return 0;

}