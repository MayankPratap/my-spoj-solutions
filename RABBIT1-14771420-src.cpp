#include<bits/stdc++.h>
long long po;
long long int power2(int base,int expo)
{
    if(expo==0)
    return 1;
    long long int f=power2(base,expo/2);
    if((expo&1)==0)
    return f*f;
    return f*f*base;
}
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
  long long x =  F[0][0]*M[0][0]+F[0][1]*M[1][0];
  long long y =  F[0][0]*M[0][1]+F[0][1]*M[1][1];
  long long z =  F[1][0]*M[0][0]+F[1][1]*M[1][0];
  long long w =  F[1][0]*M[0][1]+F[1][1]*M[1][1];

  F[0][0] = x%po;
  F[0][1] = y%po;
  F[1][0] = z%po;
  F[1][1] = w%po;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
 
        long long int n;
        int m;
        scanf("%lld %d",&n,&m);
        po=power2(2,m);
        long long int ncouple=fib(n+1);
        printf("%lld\n",ncouple%po);
   }
    return 0;

}
