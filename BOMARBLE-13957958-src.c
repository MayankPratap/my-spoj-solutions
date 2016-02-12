#include<stdio.h>
int main()
{
  while(1)
  {  int n;
     scanf("%d",&n);
     if(n==0)
     break;
     printf("%d\n",(3*n*n+5*n+2)/2);
  }
  return 0;
}
