class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& digs) {
        vector<vector<int>>falg(n,vector<int>(n));
        for(int i = 0; i<n ;++i){
            for(int j = 0; j< n;++j){
                falg[i][j] = 0;
            }
        }
         for(int i = 0; i < digs.size() ;++i){
          
                falg[digs[i][0]][digs[i][1]]=1 ;
            
        }
      
        int ans = 0;
        for(auto vec:artifacts){
              bool noart= false;
            int a,b,c,d;
            a = vec[0]; b= vec[1]; c = vec[2]; d= vec[3];
            // a-- ; b-- ;c--; d--;
            for(int i = a ;i<=c;++i){
               for(int j = b; j<=d ;++j){
                   if(falg[i][j]==0) {
                       noart = true;
                       break;
                   }
               }
                if(noart==true) break;
                
            }
            if(noart==false) ans++;
            
            
            
            
        }
        return ans;
        
    }
};
