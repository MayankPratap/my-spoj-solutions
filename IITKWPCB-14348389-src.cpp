#include<bits/stdc++.h>
long long gcd(long long a,long long b){

    if(a==0) return b;
    return gcd(b%a,a);

}
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        long long n,i;
        scanf("%lld",&n);
        long long m=floor(n/2.0);
        for(i=m;i>=0;--i){ 
            if(gcd(i,n)==1){
             
                printf("%lld\n",i);
                break;
            }
        }

   }

    return 0;

}
