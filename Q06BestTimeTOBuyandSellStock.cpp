#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxx = INT_MIN;
    int maxind,profit = 0;
    int minn = INT_MAX;
    for(int i=0;i<prices.size();++i){
       minn = min(minn,prices[i]);
       int p = (prices[i]-minn);
        profit = max(profit,p);
        
    }
    
    return profit;
}
