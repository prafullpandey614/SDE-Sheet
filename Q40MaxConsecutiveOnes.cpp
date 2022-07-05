class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma= 0;
        int max_cnt =0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==1) max_cnt++;
            else max_cnt = 0;
             ma = max(ma,max_cnt);
        }
        return ma;
    }
};
