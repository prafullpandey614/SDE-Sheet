// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int dp[1005][1005];
    int finalwt(int ind,int wet, int wt[],int val[],int n){
        if(wet==0) return 0;
        if(ind<0) return 0;
        if(dp[ind][wet]!=-1) return dp[ind][wet];
        int ans = finalwt(ind-1,wet ,wt,val,n);
        if(wet-wt[ind]>=0)
        ans = max(ans,finalwt(ind-1,wet-wt[ind] ,wt,val,n)+val[ind]);
        return dp[ind][wet]=ans;
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(dp,-1,sizeof(dp));
       // Your code here
       return finalwt(n-1,W,wt,val,n);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
