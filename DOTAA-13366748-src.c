#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,j,k,n,m,d,*h;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{   
		scanf("%d %d %d",&n,&m,&d);
		h=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
			scanf("%d",&h[j]);
			int flag=0;
	    for(k=1;k<=m;++k)
		{    int count=0;
			for(j=0;j<n;)
			{
				if(h[j]-d>0)
				{
					h[j]=h[j]-d;
					break;
				}
				else
				{
					++j;
					++count;
				}
			}
			if(count==n)
			{
				printf("NO\n");
				flag++;
				break;
			}
		}	
		if(flag==0)
			printf("YES\n");
			printf("\n");
}
	return 0;
}
