#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     double a,b,c,d;
     scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
     double s=(a+b+c+d)/2.0;
     double maxarea=sqrt((s-a)*(s-b)*(s-c)*(s-d));
     printf("%0.2lf\n",maxarea);
  }
  return 0;
}
