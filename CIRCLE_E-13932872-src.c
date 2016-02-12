#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      double r1,r2,r3;
      scanf("%lf %lf %lf",&r1,&r2,&r3);
      double num=r1*r2*r3;
      double deno=r1*r2+r2*r3+r3*r1+2*sqrt(r1*r2*r3*(r1+r2+r3));
      printf("%0.6lf\n",num/deno);
  }
  return 0;
}
