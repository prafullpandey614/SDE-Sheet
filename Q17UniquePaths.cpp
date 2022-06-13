#include <bits/stdc++.h>
int count(int  i , int  j , int m , int n, vector<vector<int>>dp){
    if(i>=m || j>=n) return 0;
    if(i==m-1 && j==n-1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j] =  count(i+1,j,m,n,dp)+count(i,j+1,m,n,dp);
}
int ncr(int n,int r){
double num =1,den=1 ;
    for(int i=0; i<r;++i){
        num *= (n-i);
    }
    for(int i = 0; i<r;++i){
        den *= (r-i);
    }
    return num/den;
}
int uniquePaths(int m, int n) {
	// Write your code here.
//     vector<vector<int>>dp(m,vector<int>(n,-1));
   
//     return count(0,0,m,n,dp);
    return ncr(m+n-2, n-1);
}
