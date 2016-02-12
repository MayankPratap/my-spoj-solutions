#include<bits/stdc++.h>
#define mod 10000007
long long int modex(long long int base,long long int expo){

     if(expo==0)
           return 1;
     long long int f=modex(base,expo/2);
     if((expo&1)==0)
           return (f*f)%mod; 
     return (((f*f)%mod)*base)%mod;

}
int main(){


     while(1){

         long long int n,k;
         scanf("%lld %lld",&n,&k);
         if(n==0&&k==0) break;
         long long int res1=modex(n,k);
         long long int res2=modex(n,n); 
         long long int res3=2*modex(n-1,k);
         long long int res4=2*modex(n-1,n-1);
         long long int res=(res1+res2+res3+res4)%mod;
         printf("%lld\n",res);
     }
     return 0;

}
