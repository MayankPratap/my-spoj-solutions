#include<bits/stdc++.h>
int main(){

    long long int p,i,n,r,count;
    scanf("%lld",&p);
    for(i=1;i<=p;++i){
        scanf("%lld %lld",&count,&n);
        long long int num=(n+9)*(n+8)*(n+7)*(n+6)*(n+5)*(n+4)*(n+3)*(n+2)*(n+1);
        long long int den=9*8*7*6*5*4*3*2*1;
        long long int res=num/den;
        printf("%lld %lld\n",count,res);
    }
    return 0;
}
