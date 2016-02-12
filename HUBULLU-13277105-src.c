#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{
		long long int n;
		int m;
		scanf("%lld %d",&n,&m);
		if(m==0)
		printf("Airborne wins.\n");
		else if(m==1)
		printf("Pagfloyd wins.\n");
	}
}
