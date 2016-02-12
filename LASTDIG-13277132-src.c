#include<stdio.h>
int main()
{
	int a,i,t,j;
	long long int b;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{
		scanf("%d %lld",&a,&b);
		if(a==0&&b!=0)
		printf("0\n");
		else if(b==0&&a!=0)
		printf("1\n");
		else
		{  int c=1,d,k;
			if(b<=4)
			{
	             for(k=1;k<=b;++k)
				 	c*=a;
				printf("%d\n",c%10);
			}
			else
			{
				for(j=1;j<=4;++j)
				{
					d=(b-j)%4;
					if(d==0)
					{
					   for(k=1;k<=j;++k)
					   c*=a;
					   printf("%d\n",c%10);
					   break;
					}
					
				}
			}
		}
	}
  return 0;
}
