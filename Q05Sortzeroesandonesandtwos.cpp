#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int z = 0 , o = 0 , t = n-1;
    while(o<=t){
        if(arr[o]==0){
            swap(arr[z],arr[o]);
            z++;
            o++;
        }
        else if(arr[o]==1){
            o++;
        }
        else{
            swap(arr[t],arr[o]);
            t--;
        }
    }
    
}
