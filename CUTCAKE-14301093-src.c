#include<stdio.h>
#include<math.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long int n;
        scanf("%lld",&n);
        if(n==1) printf("0\n");
        else{
            double res=sqrt((n-1)*2);
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
