/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<iostream>
using namespace std;

int middleOfThree(int A,int B,int C){
    if(A > B) {
        if(B > C)
            return B;
        else if(A > C)
        return C;
        else
            return A;
    }
    else{
        if(A > C)
        return A;
        else if(B > C)
        return C;
        else
        return B;
    }
}


int main() {
    int a,b,c;
    cin >> a>> b>> c;
    
    cout << middleOfThree(a,b,c);
    return 0;

}