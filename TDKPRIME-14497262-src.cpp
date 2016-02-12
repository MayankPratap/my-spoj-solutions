#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cmath>
#define MAX 100000002
using namespace std;
int sieve[MAX];
int primes[MAX];
void pre(){

   primes[0]=2;
   register int i,j,k,l;      
   for(i=3;i*i<MAX;i+=2){
      
       if(sieve[i]==0){  
         
          for(j=i*i,l=i<<1;j<MAX;j+=l){

                    sieve[j]=1;
          }            
       }
    }
   for(i=3,k=1;i<MAX&&k<5000003;i+=2){

           if(sieve[i]==0)
              primes[k++]=i;
   }
}
int main(){
    pre();
    int t;
    scanf("%d",&t);
    while(t--){
       
       int n;
       scanf("%d",&n);
       printf("%d\n",primes[n-1]);
    }    
    return 0;
}
