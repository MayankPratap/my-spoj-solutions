#include<stdio.h>
int main()
{
	long long int t,i;
	scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
    	long long int n,j=5,Z,sum=0;
    	scanf("%lld",&n);
    	while(n/j)
    	{
    		sum+=n/j;
    		j=j*5;
    		
    	}
    	printf("%lld\n",sum);
    }
    return 0;
}
