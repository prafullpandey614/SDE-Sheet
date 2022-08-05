class Solution {
public:
    // In this Question we are taking target and checking for all indexes by subtarcting them from target for each value of target instance 
    int recursion(vector<int>& nums, int target,vector<int>&dp){
        if(target<0) return 0 ;
        if(target==0) return 1;
        if(dp[target]!=-1) return dp[target] ;
        int ans = 0 ;
        
        for(int i = 0 ; i<nums.size();++i){
            ans += recursion(nums,target-nums[i],dp);
        }
        return dp[target]=ans ; //memoization
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1);
         for(int i = 0; i <dp.size();++i){
             dp[i] = -1;
         }
        return recursion(nums,target,dp);
        
    }
};
