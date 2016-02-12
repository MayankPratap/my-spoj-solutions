#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         long long x,y,z;
         scanf("%lld%lld%lld",&x,&y,&z);
         long double res1=7.0*x+5.0*y+2.0*z;
         long double res2=x+y;
          
         long double m=(res1+sqrtl(res1*res1-48*z*res2))/(2*res2);
         long long n=llrintl(m);
         printf("%lld\n",n);

         long double diff=(y-x)/(n-6.0);
         long long d=llrintl(diff);
         long long a=x-2*d;
         printf("%lld ",a);
         printf("%lld ",a+d);
         printf("%lld ",a+2*d);
         for(int i=3;i<n;i++){
 
             if(i==n-1)
                printf("%lld",a+i*d);
             else
                printf("%lld ",a+i*d);
         }
         printf("\n");      
     }
     return 0;

}
