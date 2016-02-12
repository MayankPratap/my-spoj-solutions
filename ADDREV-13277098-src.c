#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{   int c,d,b;
		scanf("%d %d",&c,&d);
		int rev1=0,rev2=0,rev3=0;
		while(c)
		{
			b=c%10;
			c=c/10;
			rev1=(rev1*10)+b;
		}
		while(d)
		{
			b=d%10;
			d=d/10;
			rev2=(rev2*10)+b;
		}
		int sum=rev1+rev2;
		while(sum)
		{
			b=sum%10;
			sum=sum/10;
			rev3=(rev3*10)+b;
		}
		printf("%d\n",rev3);
		
	}
	return 0;
}
