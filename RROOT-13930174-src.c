#include<stdio.h>
#include<math.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int side;
      scanf("%d",&side);
      double a=sqrt(2*side);
      double pimag=2/(3*a);
      double preal=1-pimag;
      printf("%0.6lf\n",preal);
   }
   return 0;
}
