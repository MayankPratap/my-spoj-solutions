#include<bits/stdc++.h>
using namespace std;

long long whirlgig(long long n){

    if(n==0)
       return 0;
   
    if(n==1)
       return 1;

    if((n&1)==0)
       return 2*whirlgig(n/2)+(n/2);
   
    return 2*whirlgig(n/2)+(n/2)+1;

}

int main(){

    
        long long a,b,sum=0;
        scanf("%lld %lld",&a,&b);
        
        printf("%lld\n",whirlgig(b)-whirlgig(a-1));
         
        return 0;

}
