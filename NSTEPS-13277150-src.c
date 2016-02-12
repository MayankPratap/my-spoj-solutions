#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=1;k<=t;++k)
	{  int n,m,i,j;
		scanf("%d %d",&m,&n);
		int *b;
		b=(int*)calloc((m+1),sizeof(int));
		if(m==n)
		{
			int a=0;
			for(i=0;i<=m;++i)
			{
				b[i]+=a;
				if(i%2==0)
				a+=1;
				else
				a+=3;
			}
			printf("%d\n",b[m]);
		}
		else if(n==m-2)
		{
			int a=2;
			for(i=2;i<=m;++i)
			{
				b[i]+=a;
				if(i%2==0)
				a+=1;
				else
				a+=3;
			}
			printf("%d\n",b[m]);
		}
		else
		printf("No Number\n");
	}
	
	return 0;
}
