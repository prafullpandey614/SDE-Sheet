class Solution {
public:
    int minSwaps(string s) {
        int cnt = 0,z = 0,o = 0;
        for(char c:s){
            if(c=='0') z++;
            else o++;
        }
        if(abs(z-o)>1) return -1;
        int minswap = 0;
     if(z>o){
           for(int i = 0;i<s.size();++i){
               if((i&1)==0 && s[i]=='1'){
                   minswap++;
               }
           }
            
        }
        else if(z==o){
            int minqswap = 0 ,minwswap=0 ;
            for(int i = 0;i<s.size();++i){
               if((i&1)==0 && s[i]=='0'){
                   minqswap++;
               }
           }
            for(int i = 0;i<s.size();++i){
               if((i&1)==0 && s[i]=='1'){
                   minwswap++;
               }
           }
            // cout<<minqswap<<" "<<minwswap<<endl;
            minswap = min(minqswap,minwswap);
            
            
        }
        else{
             for(int i = 0;i<s.size();++i){
               if((i&1)==0 && s[i]=='0'){
                   minswap++;
               }
           }
            
        }
        
        return minswap ;
    }
};
