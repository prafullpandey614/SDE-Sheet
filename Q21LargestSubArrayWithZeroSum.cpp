// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {  
        int pf[n+1];
        int m = 0;
        int sum = 0;
        unordered_map<int,int>hsh;
        for(int i=0;i<n;++i){
            sum+=A[i];
            if(sum==0){
                m =  max(m,i+1);
            }
          //  pf[i+1] = pf[i]+A[i];
            else {if(hsh.find(sum)!=hsh.end()){
                m = max(m,i-hsh[sum]);
            }
            else{
                hsh[sum] = i;
            }
        }}
        return m;
        
        // Your code here
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
