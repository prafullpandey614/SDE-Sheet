class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int pf[n],sf[n];
        pf[0] = height[0];
        sf[n-1] =height[n-1];
        for(int i=1;i<n;++i){
          pf[i] = max(pf[i-1],height[i]);
            
        }
        for(int i=n-2;i>=0;--i){
            sf[i] = max(sf[i+1],height[i]);
        }
         int sum = 0;
        for(int i=0;i<n;++i){
            sum += min(pf[i],sf[i])-height[i];
        }
        return sum;
    }
};
