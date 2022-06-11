#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    vector<int>hsh(n+10,0);
    for(int i=0;i<arr.size();++i){
        if(hsh[arr[i]]!=0) return arr[i];
        hsh[arr[i]]++;
    }
    
}
