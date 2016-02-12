#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

              long long x,y,z;
              scanf("%lld %lld %lld",&x,&y,&z);
              long long int res1=x*x+y*y+2*y*z;
              long long int root=2*z*sqrt(res1);
              long long int res2=2*z*x,t=0;
              long long int res3=2*(y+2*z);
              long long int res4=res2+root;
              if((res1-root*root)==0){

                     printf("Not this time.\n");
                     continue;
              }
              if(res4%res3==0){
                    t=res4/res3;
                    if(t<=x)
                    printf("%lld\n",t);
                    else
                     printf("Not this time.\n");
                     
               }
               else{

                  printf("Not this time.\n");
               }
        
    }
    return 0;
}
