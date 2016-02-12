#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
  {
     long long int a,b;
     scanf("%lld %lld",&a,&b);
     long long int hcf=gcd(a,b);
    printf("%lld %lld\n",b/hcf,a/hcf);
  }
  return 0;
}
