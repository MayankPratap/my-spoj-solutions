#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<sstream>
#include<cctype>
#include<cstdlib>

#define mod 1000000007
using namespace std;

int sieve[100005],k=0;
int primes[100005];
void precompute(){
    int i,j;
    for(i=2;i<100005;++i){

         if(sieve[i]==0){
            for(j=i+i;j<100005;j+=i){

                  sieve[j]=1;     
            }
            primes[k++]=i;
         }
    }
}

int main(){

    precompute();
    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,m;
        long long int res=1,sum=0;
        scanf("%d",&n);
        m=n;
        if(n!=0){

              for(i=0;i<k;++i){            
                   sum=0;
                     int a=primes[i];      
                      while(1){

                        int temp=n/a;
                        if(temp==0) break;
                        sum+=temp;
                        a*=primes[i];
                     }
                  
                   res=((res%mod)*((sum+1)%mod))%mod;
       
                
              }
               printf("%lld\n",res);
        }     
        else
             printf("1\n"); 
    }
    return 0; 
}
