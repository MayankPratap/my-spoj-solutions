#include<bits/stdc++.h>
#define mod 1000000007 
long long int modex(int base,int expo){

     if(expo==0) return 1;
 
     long long int f=modex(base,expo/2);
 
     if((expo&1)==0)
            return (f*f)%mod;
     return (((f*f)%mod)*base)%mod;


} 
int main(){

    int n,l;
    while(1){

         scanf("%d %d",&n,&l);
         if(n==0&&l==0) break;
         long long int sum=0;
         int i;
         for(i=1;i<=l;++i){
              sum+=modex(n,i);

         }
 
         printf("%lld\n",sum%mod);

    }
    return 0;
}
