#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n  =arr.size();
    vector<int>hsh(1e5+10,0);
    for(int i:arr){
        hsh[i]++;
    }
    vector<int>ans;
    
    for(int i=0;i<hsh.size();++i){
        if(hsh[i]>(n/3)) ans.push_back(i);
    }
    return ans;
}
