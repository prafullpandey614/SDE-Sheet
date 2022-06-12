#include <bits/stdc++.h> 
int mod(int x,int n,int m){
    if(n==0) return 1;
    else if((n&1)==0){
       long long int y = mod(x,n/2,m);
        return (y*y)%m;
    }
    else {
        long long int y = mod(x,n/2,m);
        return ((y*y)%m *(x%m))%m;
    }
}
int modularExponentiation(int x, int n, int m) {
    return mod(x,n,m);
}