#include<stdio.h>
int main()
{
  int t,i=0;
  scanf("%d",&t);
  while(t--)
  { ++i;
    double r;
    scanf("%lf",&r);
    double s;
    s=4*r*r+1.0/4.0;
    printf("Case %d: %0.2lf\n",i,s);
  }
  return 0;
}
