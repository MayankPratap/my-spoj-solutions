#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;


int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         long long int n,sum[200]={0};
         long long int k,i,j,m;
         scanf("%lld %lld",&n,&k);
         m=(sqrt(8*n+1)-1)/2;
         long long int diff=n-(m*(m+1))/2;
        
         long long int row=m/k,col=m%k;
        
         if(col==0){ 

              col=k;
              row--;
          }
         for(j=1;j<=k;++j){

              if(j<=col)
                  sum[j]+=((row+1)*(2*j+row*k))/2;
              else
                  sum[j]+=(row)*(2*j+(row-1)*k)/2;
         }
          if(col==k)
             sum[1]+=diff;
          else
             sum[col+1]+=diff;
         for(j=1;j<=k;++j){

              printf("%lld ",sum[j]);

         }        
         printf("\n");
    }
    return 0;

}
