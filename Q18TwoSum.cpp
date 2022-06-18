class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>Ans;
        int n   = nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;++i){
            if(m.find(target-nums[i])!=m.end()){
                Ans.push_back(m[target-nums[i]]);
                Ans.push_back(i);
                return Ans;
            }
            m[nums[i]]= i;
        }
        return Ans;
    }
};
