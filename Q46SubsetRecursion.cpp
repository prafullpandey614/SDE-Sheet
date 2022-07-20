
void recursion(int ind , vector<int>&ans , vector<int>&num , int n , int sum ){
    if(n==ind){
        ans.push_back(sum);
        return ;
    }
    
    //case 1 taking ith index value
  
    recursion(ind+1,ans,num,n,sum+num[ind]);
    
    ///backtrack
   
    //case 2 not cosidering ith index value
    recursion(ind+1,ans,num,n,sum);
    
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
//     int ind = 0;
    vector<int>ans;
//     int sum = 0;
    recursion(0, ans ,num  , num.size() ,0);
    sort(ans.begin(),ans.end());
    return ans;
}
