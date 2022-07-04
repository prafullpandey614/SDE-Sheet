import java.util.* ;
import java.io.*; 
public class Solution {
    public static long getTrappedWater(long[] arr, int n) {
        // Write your code here.
        long[] pf = new long[n];
        long[] sf = new long[n];
        long  sum = 0;
        sf[n-1] = arr[n-1];
        pf[0] = arr[0];
        for(int i=1;i<n;++i){
            pf[i] = Math.max(pf[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;--i){
            sf[i] = Math.max(sf[i+1],arr[i]);
        }
        for(int i=0;i<n;++i){
            sum+=Math.min(pf[i],sf[i]) - arr[i];
        }
        return sum ;
    }
}
