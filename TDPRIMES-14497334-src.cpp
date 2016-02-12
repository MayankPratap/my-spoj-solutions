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

int main(){
 
   
   primes[0]=2;
   register int i,j,k,l;      
   for(i=3;i*i<MAX;i+=2){
      
       if(sieve[i]==0){  
         
          for(j=i*i,l=i<<1;j<MAX;j+=l){

                    sieve[j]=1;
          }            
       }
    }
   for(i=3,k=1;i<MAX;i+=2){

           if(sieve[i]==0)
              primes[k++]=i;
   }
   for(i=0;i<k;i+=100){

          printf("%d\n",primes[i]);
   }
    return 0;
}
