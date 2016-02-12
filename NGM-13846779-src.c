#include<stdio.h>
int main()
{
 long long int n;
 while((scanf("%lld",&n))==1)
 {
    if(n%10==0)
    {
       printf("2\n");
    }
    else
    {
       printf("1\n");
       long long int m;
       m=n-(n/10)*10;
       printf("%lld\n",m);
    }
 }
 return 0;
}
