#include<stdio.h>
#include<math.h>
#define pi 3.1415926
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{
		long long int m;
		scanf("%lld",&m);
		if(m==0||m==1)
		printf("1\n");
		else
		{
		long double n=m;
		long double lenfact;
		long long int len=ceil((log(2*pi)-2*n+log(n)*(1+2*n))/(2*log(10)));
		printf("%lld\n",len);}
	}
	return 0;
}
