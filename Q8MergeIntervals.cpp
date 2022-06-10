#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    vector<int>ds(2);
    ds = intervals[0];
    for(int i=0;i<intervals.size();++i){
        
        if(intervals[i][0]<=ds[1]){
           
            ds[1] = max(intervals[i][1],ds[1]);
            
        }
        else {
            ans.push_back(ds);
            ds  =  intervals[i];
        }
    }
    ans.push_back(ds);
    return ans ; 
}
