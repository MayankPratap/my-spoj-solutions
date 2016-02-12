#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cctype>
#include<sstream>
#include<vector>
#include<algorithm>
#define MAX 10000000000
using namespace std;
long long int gcd(long long a,long long b){

     if(a==0)
         return b;
     return gcd(b%a,a);


}
int main(){

    long long int n,i,v[1005],w,h,d,j;

    while(1){

         long long min=MAX,temp,vol,sum=0,hcf;
         scanf("%lld",&n);
         if(n==0) break;
         scanf("%lld %lld %lld",&w,&h,&d);
         hcf=gcd(w,h);
         hcf=gcd(hcf,d);
         v[0]=w*h*d;
         for(i=1;i<n;++i){

               scanf("%lld %lld %lld",&w,&h,&d);
               v[i]=w*h*d;
               hcf=gcd(hcf,w);
               hcf=gcd(hcf,h);
               hcf=gcd(hcf,d);
               
         }
         vol=hcf*hcf*hcf;
         for(i=0;i<n;++i){

              sum+=v[i]/vol;
         }
          printf("%lld\n",sum);

    }
    return 0;
}
