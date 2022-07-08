class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int hi = nums.size()-2;
        int lo = 0;
            while(hi>=lo){
                int mis = (hi+lo)>>1;
                if(nums[mis]==nums[mis^1]){
                    lo = mis+1;
                }
                else hi = mis-1;
                }
        return nums[lo];
    }
    
};
