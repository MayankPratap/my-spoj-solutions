#include<stdio.h>
int gcd(int a,int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main()
{
   int t,i;
   scanf("%d",&t);
   for(i=1;i<=t;++i)
   {
      int a,b,c,hcf;
      scanf("%d %d %d",&a,&b,&c);
      hcf=gcd(a,b);
      if(c%hcf==0)
      printf("Case %d: Yes\n",i);
      else
      printf("Case %d: No\n",i);
   }
   return 0;
}
