/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

 bool shuffle(string first,string second,string result){
     if(first.length() + second.length() != result.length()){
         return false;
     }
     int i = 0,j = 0,k = 0;
     while(k != result.length()){
         if(i < first.length() && first.at(i) == result.at(k)){
             i++;
         }
         else if(j < second.length() && second.at(j) == result.at(k)){
             j++;
         }
         else{
             return false;
         }
         k++;
     }
     if(i < first.length() || j < second.length()){
         return false;
     }
     return true;
 }

int main() {
    string first = "XY";
    string second = "12";
    string result = {"XY2"};
   
    if(shuffle(first,second,result)){
        cout << "Yes both string are shuffle of result";
    }
    else{
        cout << "Not shuffle";
        
    }
    return 0;

}