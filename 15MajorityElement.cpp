#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    vector<int>h(1e5+10,0);
    vector<int>h2(1e5+10,0);
    for(int i=0;i<n;++i){
        if(arr[i]>=0)
        h[abs(arr[i])]++;
        else h2[abs(arr[i])]++;
    }
    bool b = 0;
    int m = INT_MIN;
    for(int i=0;i<h.size();++i){
        if(h[i]>(n/2)) {m = i ; b=1 ;break;}
    }
    for(int i=0;i<h2.size();++i){
        if(h2[i]>(m) && h2[i]>(n/2)) { m =  -i ; b=1 ; break; }
    }
    if(b)
    return m;
    else return -1;
}
