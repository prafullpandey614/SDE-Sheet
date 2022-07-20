class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
      
        set<int>ans;
        int n = nums.size();
        for(int i=0 ; i< n;++i){
           
            if(nums[i]==key){
                int  j = i-1;
                int m  = k;
               while(j>-1){
                   if(m==0) break ;
                   ans.insert(j);
                   j--;
                   m--;
                   
               }
                ans.insert(i);
                m = k;
                j  = i+1;
                while(j<n){
                    if(m==0) break ;
                   ans.insert(j);
                   j++;
                   m--;
                    
                }
           }
          
        }
        vector<int>v;
        for(int x:ans){
            v.push_back(x);
        }
        return v;
    }
};
