#include<bits/stdc++.h>
using namespace std;
#define LL long long 
LL modex(LL base,LL expo,LL mod){

    LL x=1,y=base;
    while(expo>0){

        if((expo&1)!=0)
          x=(x*y)%mod;
        y=(y*y)%mod;
        expo=expo>>1;
    }
    return x;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         LL n,p,result=-1,prod=1;
         scanf("%lld %lld",&n,&p);
         if(n>=p)
            printf("0\n");     
         else{     

             LL i;
             for(i=n+1;i<p;++i){

                 prod=(prod*i)%p;
             }
             result=result*modex(prod,p-2,p);
             printf("%lld\n",(result+p)%p);
        }
    }
    return 0;

}
