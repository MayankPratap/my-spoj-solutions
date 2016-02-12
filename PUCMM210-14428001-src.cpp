#include<bits/stdc++.h>
#define mod 1000000003
long long int sum[1000000];
long long int modex(long long int base,long long int expo){

     if(expo==0)
           return 1;
     long long int f=modex(base,expo/2);
     if((expo&1)==0)
           return (f*f)%mod; 
     return (((f*f)%mod)*base)%mod;

}
void precompute(){

   long long int i,res;
   for(i=1;i<=1000000;++i){

        res=i*(i+1)/2;       
        res=modex(res,2);
        sum[i]=sum[i-1]+res;
   }
}
int main(){

    int t;
    precompute();
    scanf("%d",&t);
    while(t--){

        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",sum[n]%mod);
          
   }
    return 0;

}
