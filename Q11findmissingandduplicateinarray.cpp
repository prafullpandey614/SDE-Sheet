#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int k = 0 , l = 0;
	vector<int>hsh(n+10,0);
    for(int i=0;i<n;++i){
        if(hsh[arr[i]]!=0) l = arr[i];
        hsh[arr[i]]++;
        
    }
    for(int i=1;i<=n;++i){
        if(hsh[i]==0) k = i;
        
    }
    return {k,l};
}
