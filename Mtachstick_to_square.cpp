class Solution {
public:
    bool dfs(vector<int>& ms,vector<long long int>&ds,int tar,int ind){
        if(ind == ms.size()){
        if(ds[0]==ds[1] && ds[1]==ds[2] && ds[2]==ds[3]) return 1;
            else return 0;
        }
      //  ds.push_back(ms[ind]);
        for(int i=0;i<4;++i){
            if(ds[i]+ms[ind]>tar) continue;
            
            int j = i-1;
            while(j>=0){
                if(ds[i]==ds[j]){
                    break;
                    continue;
                }
                j-=1;
            }
            ds[i]+= ms[ind];
            if(j==-1){
            if(dfs(ms,ds,tar,ind+1)){
                return 1;
            }}
            ds[i]-=ms[ind];
        }
        return 0;
         
    }
    bool makesquare(vector<int>& matchsticks) {
        
        if(matchsticks.size()==0) return 0;
        vector<long long>ds(4,0);
        
        long long int sum = accumulate(matchsticks.begin(),matchsticks.end(),0)/4;
        
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        return dfs(matchsticks,ds,sum,0);
    }
};
