#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
  int p;
  scanf("%d",&p);
  while(p--)
  {
     long long int n,k,m;
     int t;
     scanf("%lld %lld %lld",&n,&k,&m);
    if(m<=n)
      printf("0\n");  
     else
     {
         float result = log(m/n)/log(k);
         printf("%d\n",(int)result);
     }
  }
  return 0;
}
