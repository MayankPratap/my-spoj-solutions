#include<bits/stdc++.h>
double squareroot(long long int n){

    double approx,better;
    approx=(double)n/2.0;
    better=(approx+(double)n/approx)/2.0;
    while(better!=approx)
   {
       approx=better;
       better=(approx+(double)n/approx)/2.0;
   }
   return approx;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long int n;
        scanf("%lld",&n);
        if(n==1) printf("0\n");
        else{
            double res=squareroot((n-1)*2);
            double lower=floor(res);
            double upper=ceil(res);
            if(upper-res>=res-lower)
                res=lower;
            else
                res=upper;
            printf("%0.0lf\n",res);
        }
   }
   return 0;
}
