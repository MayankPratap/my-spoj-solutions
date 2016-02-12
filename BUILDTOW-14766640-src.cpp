#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
void multiply(long long F[2][2],long long M[2][2]);

void power(long long F[2][2],long long n);

long long fib(long long n){

     long long F[2][2]={{1,1},{1,0}};
     if(n==0)
        return 0;
     power(F,n-1);
     return F[0][0]%mod;

}

void power(long long F[2][2],long long n){

    if(n==0 || n==1)
         return;

    long long M[2][2]={{1,1},{1,0}};

    power(F,n/2);
    
    multiply(F,F);
  
    if((n&1)!=0)
       multiply(F,M);    

}

void multiply(long long F[2][2],long long M[2][2]){

    long long x=F[0][0]*M[0][0]+F[0][1]*M[1][0];
    long long y=F[0][0]*M[0][1]+F[0][1]*M[1][1];
    long long z=F[1][0]*M[0][0]+F[1][1]*M[1][0];
    long long w=F[1][0]*M[0][1]+F[1][1]*M[1][1];
 
    F[0][0]=x%mod;
    F[0][1]=y%mod;
    F[1][0]=z%mod;
    F[1][1]=w%mod;
 
}

int main(){

    int t;
    scanf("%d",&t);
    
    while(t--){ 

         long long n;        
         scanf("%lld",&n);
        
         long long res=fib(n+2)*fib(n+1)-1;
         printf("$%lld\n",res%mod);
                 
    }
    return 0;

}
