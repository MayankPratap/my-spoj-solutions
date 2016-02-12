#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	while((scanf("%d %d",&n,&m)==2))
	{
		int *a,i,j;
		a=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;++i)
		{
			if(i==n-1)
			scanf("%d",&a[i]);
			else
			scanf("%d ",&a[i]);
		}
		int sum=0,max=0,flag=0;
		for(i=0,j=0;j<n;)
		{   
			
		      if(flag==0)
			  sum+=a[j];
			if(sum<=m)
			{   
				if(sum>=max)
				max=sum;
			    ++j;
			    flag=0;
			}
			else
			{
				sum-=a[i];
				++i;
				++flag;
			}
		}
		printf("%d\n",max);
		free(a);
	}
	return 0;
}
