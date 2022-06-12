#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    for(int i=0;i<m;++i){
        vector<int>::iterator lower= lower_bound(mat[i].begin(), mat[i].end(), target);
        auto k = lower-mat[i].begin();
        if(mat[i][k]==target) return true;
    }
    return false;
}