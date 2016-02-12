#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;
int diff[1005];
void precompute(){

    int i;
    for(i=1;i<=1000;++i)
       diff[i]=(i+1)*(i+1)-(i)*(i);
 
}

int main(){

    int t;
    precompute();
    scanf("%d",&t);
    while(t--){

        int a,b,i;
        scanf("%d %d",&a,&b);
        int m=sqrt(a);
        long long int res1=0,res2=2*m+1,res;
        
        for(i=m;i*i<b;++i){       

              if(a==b){
                 res1=0;
                 res2=0;
              } 
              else{
                res1=res1^(2*i+1);
                res2=res2&(2*i+1);    
              }
        }
        printf("%lld\n",res1&res2);

   }
   return 0;
}
