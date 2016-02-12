#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{   int n;
	float b;
		scanf("%d",&n);
		b=(float)n/(n+1);
		printf("%0.8f\n",b);
	}
	return 0;
}