#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
int sieve[10000000],ans[10000000];
void precompute(){

      int i,j;
      for(i=2;i*i<=10000000;++i){
         if(sieve[i]==0){
            for(j=i*i;j<=10000000;j+=i){

                  sieve[j]=1;             
                         
            }
         }
      }
      for(i=2;i<=10000000;++i){
              
              ans[i]=ans[i-1];
              if(sieve[i]==0) ans[i]=ans[i-1]+1;
              else if((i&1)==0&&sieve[i/2]==0) ans[i]=ans[i]-1;
     }

}

int main(){

    precompute();
    int t;
    scanf("%d",&t);
    while(t--){

         int n;
         scanf("%d",&n);
         printf("%d\n",ans[n]);

    }
    return 0;

}
