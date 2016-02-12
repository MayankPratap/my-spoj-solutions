#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n,a,d,j,sum=0;
		scanf("%d %d %d",&n,&a,&d);
		for(j=1;j<=n;j++)
		{
			
			sum=sum+a;
			a=a+d;
		}
		printf("%d\n",sum);
	}
	return 0;
}
