#include<stdio.h>
#include<math.h>
int main()
{
  while(1)
  {
     long long int n;
     scanf("%lld",&n);
     if(n==-1)
     break;
     else
     {
       long long int p,q;
       p=12*n-3;
       q=sqrt(p);
       if(q*q==p)
        printf("Y\n");
       else
        printf("N\n");
     }
  }
return 0;
}
