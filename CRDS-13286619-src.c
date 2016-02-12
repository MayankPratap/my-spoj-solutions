#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		long long int n,sum;
		scanf("%lld",&n);
		sum=3*n*n+n;
		sum=sum/2;
		sum=sum%1000007;
		
		printf("%lld\n",sum);
	}
	return 0;
}
