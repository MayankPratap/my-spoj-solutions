#include<bits/stdc++.h>
 long long int n,m;
void multiply(long long int F[2][2], long long int M[2][2]);
void power(long long int F[2][2], long long int n);
long long int fib(long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
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
  int x =  ((F[0][0]%m)*(M[0][0]%m))%m + ((F[0][1]%m)*(M[1][0]%m))%m;
  int y =  ((F[0][0]%m)*(M[0][1]%m))%m + ((F[0][1]%m)*(M[1][1]%m))%m;
  int z =  ((F[1][0]%m)*(M[0][0]%m))%m + ((F[1][1]%m)*(M[1][0]%m))%m;
  int w =  ((F[1][0]%m)*(M[0][1]%m))%m + ((F[1][1]%m)*(M[1][1]%m))%m;

  F[0][0] = x%m;
  F[0][1] = y%m;
  F[1][0] = z%m;
  F[1][1] = w%m;
}
int main(){

    int t;
    scanf("%d",&t); 
    while(t--){

        scanf("%lld %lld",&n,&m);
        long long int res=2*fib(n+2)-2%m-n%m;
        printf("%lld\n",(res+m)%m);
    }
    return 0;

}
