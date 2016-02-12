#include<bits/stdc++.h>
using namespace std;
#define max 10000007
int sieve[max]={0};
void precompute(){

     int i,j;
     for(i=2;i<=max;++i)
           if(sieve[i]==0)
               for(j=2*i;j<=max;j+=i)
                  if(sieve[j]==0)
                       sieve[j]=i;
                                            
}

int main(){
    precompute();
   
    int n;
    while(scanf("%d",&n)!=EOF){

         int i;
         printf("1");
         if(n!=1){          
            if(sieve[n]!=0)
                while(n%sieve[n]==0){printf(" x %d",sieve[n]);n=n/sieve[n]; if(sieve[n]==0) break;}
             printf(" x %d",n);         
         }         
         printf("\n");
         
   }
    return 0;

}
