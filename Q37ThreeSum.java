import java.util.* ;
import java.io.*; 
public class Solution {

	public static ArrayList<ArrayList<Integer>> findTriplets(int[] arr, int n, int K)  {
        ArrayList<ArrayList<Integer>>r = new ArrayList<>();
        Arrays.sort(arr);
       
        for(int i=0;i<n;++i){
            if(i==0||(i>0 && arr[i]!=arr[i-1])){
                int sum = K- arr[i];
                int hi = n-1;
                int lo = i+1;
                while(hi>lo){
                    if(arr[hi]+arr[lo]==sum){
                        ArrayList<Integer>k = new ArrayList<>();
                        k.add(arr[i]);
                        k.add(arr[lo]);
                        k.add(arr[hi]);
                        r.add(k);
                        while(hi>lo && arr[lo]==arr[lo+1]) lo++;
                        while(hi>lo && arr[hi]==arr[hi-1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if(arr[hi]+arr[lo]<sum) lo++;
                    else hi--;
                }
            }
            
           
        } return r;

	    // Write your code here.

	}
}
