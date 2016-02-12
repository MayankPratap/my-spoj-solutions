#include<stdio.h>
int main()
{
   int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{

         long long int n,j,cands;
        long long int sum=0;
		printf("\n");
		scanf("%lld",&n);   
		for(j=1;j<=n;++j)
		{   scanf("%lld",&cands);
			sum+=cands%n;
		}
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");
	
	}
	return 0;
	
}