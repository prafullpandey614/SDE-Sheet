int findMinimumCoins(int v) 
{
    // Write your code here
      int M = 9;
    int coins[M] ={1,2,5,10,20,50,100,500,1000};
     int count = 0;
        
        for(int i=M-1;i>=0;--i){
            while(v-coins[i]>=0){
                v = v-coins[i];
                count++;
            }
           
            
        }
        if(v>0) return -1;
        return count;
}
