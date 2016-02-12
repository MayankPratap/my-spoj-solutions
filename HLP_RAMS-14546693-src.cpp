#include<bits/stdc++.h>
using namespace std;
long long power(int base,int expo){
 
    if(expo==0) 
         return 1;
    long long int f=power(base,expo/2);
    if((expo&1)==0)
        return f*f;
    return f*f*base;

}
int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       long long n,mask=1,neven,nodd;
       scanf("%lld",&n);
       int a[64]={0},i,count=0;
       for(i=63;i>=0;--i){

           if((n&mask)==0)
               a[i]=0;
           else{
               a[i]=1;
               ++count;
            }
           mask=mask<<1;
       }
            
       nodd=power(2,count);
       neven=n+1-nodd;
       printf("%lld %lld\n",neven,nodd);

   }
   return 0;

}
