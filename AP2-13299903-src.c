#include<stdio.h>
int main()
{
	long long int t,i;
	scanf("%lld",&t);
	for(i=1;i<=t;++i)
	{
		long long int t3,tl3,sum,n,d,a,j;
		scanf("%lld %lld %lld",&t3,&tl3,&sum);
		    n=(2*sum)/(t3+tl3);
		    printf("%lld\n",n);
		    if(n!=5)
		      d=(tl3-t3)/(n-5);
	        else
	        d=0;
		       a=t3-2*d;
		    
		     for(j=1;j<=n;++j)
		    {  
			  printf("%lld ",a);
			  a=a+d;
	     	}
	      printf("\n");
	}
	return 0;
}
	
