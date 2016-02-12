#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

#define mod 1000000007

long long int modex(long long int base,long long int expo){

     if(expo==0)
           return 1;
     long long int f=modex(base,expo/2);
     if((expo&1)==0)
           return (f*f)%mod; 
     return (((f*f)%mod)*base)%mod;

}

int main(){

     long long int n,w,t,s,i;
     scanf("%lld %lld %lld %lld",&n,&w,&t,&s);
     long long int r=min(w,n-w);
     long long int num=1,den=1;
     for(i=0;i<=r-1;++i){

         num=(num*(n-i))%mod;
         den=(den*(r-i))%mod;
          
     }
                    
     long long int res1=(num*modex(den,mod-2))%mod;

     n=n-w;
     r=min(t,n-t);
     num=1;
     den=1;
     for(i=0;i<=r-1;++i){

         num=(num*(n-i))%mod;
         den=(den*(r-i))%mod;
          
     }
     long long int res2=(num*modex(den,mod-2))%mod;
     n=n-t;
     r=min(s,n-s);
     num=1;
     den=1;
     for(i=0;i<=r-1;++i){

         num=(num*(n-i))%mod;
         den=(den*(r-i))%mod;
          
     }
     long long int res3=(num*modex(den,mod-2))%mod;
     long long int res=(res1%mod)*(res2%mod)*(res3%mod);
     printf("%lld\n",res%mod);    
    return 0;
}
