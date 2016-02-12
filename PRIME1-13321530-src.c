#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=1;k<=t;++k)
	{
		long long int m,n,i,j,a,b;
		scanf("%lld %lld",&m,&n);

		for(i=m;i<=n;++i)
		{   if(i==1)
		    continue;
			if(i==2)
			printf("%lld\n",i);
			if(i%2!=0)
			{  
			long long int count=0;
				for(j=2;j*j<=i;++j)
				if(i%j==0)
				{
					++count;
					break;
				}
				if(count==0)
				printf("%lld\n",i);
			}
			
		}
		printf("\n");
}
return 0;
}