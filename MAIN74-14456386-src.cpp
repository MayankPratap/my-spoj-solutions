#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>

#define m 1000000007
using namespace std;
void multiply(long long int F[2][2], long long int M[2][2]);
void power(long long int F[2][2], long long int n);
long long int fib(long long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n);
  return F[0][0];
}
void power(long long int F[2][2], long long int n)
{
  if( n == 0 || n == 1)
      return;
  long long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long int F[2][2], long long int M[2][2])
{
 long long int x =  ((F[0][0]%m)*(M[0][0]%m))%m + ((F[0][1]%m)*(M[1][0]%m))%m;
  long long int y =  ((F[0][0]%m)*(M[0][1]%m))%m + ((F[0][1]%m)*(M[1][1]%m))%m;
  long long int z =  ((F[1][0]%m)*(M[0][0]%m))%m + ((F[1][1]%m)*(M[1][0]%m))%m;
  long long int w =  ((F[1][0]%m)*(M[0][1]%m))%m + ((F[1][1]%m)*(M[1][1]%m))%m;

  F[0][0] = x%m;
  F[0][1] = y%m;
  F[1][0] = z%m;
  F[1][1] = w%m;
}

int main(){

    int t;
    long long n;
    scanf("%d",&t); 
    while(t--){

         scanf("%lld",&n);
         if(n==0)
             printf("0\n");
         else if(n==1)
             printf("2\n");
         else{

              printf("%lld\n",fib(n+2)%m);
         }
    }
    return 0;
}
