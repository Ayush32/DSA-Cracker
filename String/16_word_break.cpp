/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int dictContains(string word){
    string dict[] = {"mobile","samsung","sam","sung","man","mango","icecream","and","go","i", "like","cream"};
    int size = sizeof(dict)/sizeof(dict[0]);
    for(int i = 0;i<size;i++){
        if(dict[i].compare(word) == 0)
        return true;

    }
    return false;
}

bool wordBreak(string str){
    int size = str.size();
    if(size == 0){
        return true;
    }
    bool wb[size+1];
    memset(wb,0,sizeof(wb));

    for(int i = 1;i<=size;i++){
        if(wb[i] == false && dictContains(str.substr(0,i)))
        wb[i] = true;

        if(wb[i] == true){
            if(i ==size)
            return true;
            for(int j = i +1;j<=size;j++){
                if(wb[j] == false && dictContains(str.substr(i,j-i)))
                wb[j] = true;

                if(j == size & wb[j])
                return true;
            }
        }
    }
    return false;
}

int main() {
    wordBreak("ilikesamsung")? cout <<"Yes\n": cout << "No\n"; 
    wordBreak("iiiiiiii")? cout <<"Yes\n": cout << "No\n"; 
    wordBreak("")? cout <<"Yes\n": cout << "No\n"; 
    wordBreak("ilikelikeimangoiii")? cout <<"Yes\n": cout << "No\n"; 
    wordBreak("samsungandmango")? cout <<"Yes\n": cout << "No\n"; 
    wordBreak("samsungandmangok")? cout <<"Yes\n": cout << "No\n"; 
    return 0;

}