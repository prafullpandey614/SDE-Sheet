#include <bits/stdc++.h> 
#define ll long long 
long long maxSubarraySum(int arr[], int n)
{
 ll ans;
  ll temp=arr[0];
    ans = arr[0];
    for(int i=1;i<n;++i){
        int k = arr[i];
        if(arr[i]<(arr[i]+temp)){
            temp += arr[i];
        }
        else temp = arr[i];
        ans = max(ans,temp);
        if(ans<0) ans=  0;
    }
    return ans;
}