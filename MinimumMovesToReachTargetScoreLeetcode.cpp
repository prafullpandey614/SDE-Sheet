class Solution {
public:
    int minMoves(int target, int maxDouble) {
        int cnt = 0;
        while(target>1){
            if(target&1){
                target--;
                cnt++;
            }
            else if(maxDouble){
                 
                     target/=2;
                     cnt++;
                     maxDouble--;
                 
                
            }
            else{
                cnt += target-1;
                 break;
            }
        }return cnt;
    }
};
