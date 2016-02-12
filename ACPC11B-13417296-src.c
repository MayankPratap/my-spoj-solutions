#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d",&n);
	    int a[1005],b[1005];
		int j,k;
		for(j=0;j<n;++j)
		{   scanf("%d",&a[j]);
	    }
		scanf("%d",&m);
		for(j=0;j<m;++j)
		{  scanf("%d",&b[j]);
	    }
		long long int minm=999999,p;
		for(j=0;j<n;++j)
			for(k=0;k<m;++k)
			{  p=abs(b[k]-a[j]);
			   if(p<minm)
			   minm=p;       			    
		    }
		printf("%lld\n",minm);
	}
	return 0;
} 
