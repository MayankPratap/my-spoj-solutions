#include<bits/stdc++.h>
long long int gcd(long long int a,long long int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        long long int n1oddterms,n1eventerms,n3oddterms,n3eventerms;
        if(n%2==0){
            n1oddterms=n/2;
            n1eventerms=n/2;
            n3oddterms=3*n/2;
            n3eventerms=3*n/2;
        }
        else{

            n1oddterms=(n+1)/2;
            n1eventerms=(n-1)/2;
            n3oddterms=(3*n+1)/2;
            n3eventerms=(3*n-1)/2;

        }
       
        long long int num=(n1oddterms*n3oddterms)+(n1eventerms*n3eventerms);
        long long int den=6*n*n*n;
        long long int hcf=gcd(num,den);
        den=den/hcf;
        num=num/hcf;
        printf("%lld/%lld\n",num,den);

    }

    return 0;
}
