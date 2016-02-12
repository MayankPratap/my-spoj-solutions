#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
double f(long long int n){
    double sum;
    long long int m;
    if((n&1)==0){
                      
              m=n/2;
              sum=(4*(double)m*((double)m+1)*(2*(double)m+1))/6.0;

    }
    else{

              m=(n+1)/2;
              sum=((double)m*(2*(double)m-1)*(2*(double)m+1))/3.0;             
    }
    return (8*(sum))/(double)(n*n);
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         long long int n;
         double g;
         scanf("%lld",&n);
         g=sqrt(f(n)-((n-1)*(n-1)*f(n-1)/(double)(n*n))+1.0/(double)(n*n));
         printf("%0.8lf\n",g);

    }
    return 0;
}
