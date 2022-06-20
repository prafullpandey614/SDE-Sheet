class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hsh ;
        for(int n:nums){
            hsh.insert(n);
        }
        int ans= 0;
        for(int n:nums){
            if(hsh.find(n-1)==hsh.end()){
                int cur = 1;
                int curv = n;
                while(hsh.find(curv+1)!=hsh.end()){
                    cur+=1;
                    curv+=1;
                }
                ans = max(ans,cur);
            }
        }
        return ans;
    }
};
