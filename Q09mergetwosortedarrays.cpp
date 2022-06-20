class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        for(int i=0;i<n;++i){
            nums1.pop_back();
        }
        for(int d:nums2){
            
            nums1.push_back(d);
        }
        int shell = (m+n+1)/2;
        while(shell!=0){
            for(int i=0;(i+shell)<(m+n);++i){
                if(nums1[i]>nums1[i+shell]){
                    swap(nums1[i],nums1[i+shell]);
                }
            }
            if(shell==1) break;
             if(shell&1){
                 shell++;
                 shell/=2;
             }
            else shell/=2;
            
            
        }
    }
};
