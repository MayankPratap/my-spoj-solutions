#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    long long int n,m;
    scanf("%lld",&n);
    if(n%2==0)
    m=n/2-1;
    else
    m=n/2;
    printf("%lld\n",((m%n)*(m%n))%n);
  }
  return 0;
}
