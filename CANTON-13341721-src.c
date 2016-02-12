#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	
	for(k=1;k<=t;++k)
	{    long long int a,b;
	     long long int n,i,j,sum=0;    /* nth term*/
	     scanf("%lld",&n);
	     for(i=1;;++i)
	     {
	     	sum+=i;
	     	if(n-sum<=(i+1))
	     	{
	     		if((i+1)%2==0)
	     		{
	     			a=1,b=i+1;
	     			for(j=1;j<(n-sum);++j)
	     			{
	     				a++,b--;
	     			}
	     			printf("TERM %lld IS %lld/%lld\n",n,a,b);
	     			break;
	     		}
	     		else
	     		{
	     			a=i+1,b=1;
	     			for(j=1;j<(n-sum);++j)
	     			{
	     				a--,b++;
	     			}
	     			printf("TERM %lld IS %lld/%lld\n",n,a,b);
	     			break;
	     		}
	     	}
	     }
	 }
	 return 0;
}
