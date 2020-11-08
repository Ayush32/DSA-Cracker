/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;

int n , dp[1000][1000];

int countPS(string s,int  i, int j){
   if(i > j)
   return 0;

   if(dp[i][j] != -1)
   return dp[i][j];

   if(i == j)
   return dp[i][j] = 1;
   
   else if(s[i] == s[j])
   return dp[i][j] = countPS(s,i+1,j)+countPS(s,i,j-1) +1;

   else
   
       return dp[i][j] = countPS(s,i+1,j) + countPS(s,i,j-1)-countPS(s,i+1,j-1);
}

int main() {
    string s;
    cin >> s;
    memset(dp,-1,sizeof(dp));
    n = s.length();
    cout << countPS(s,0,n-1) <<endl;
    return 0;

}