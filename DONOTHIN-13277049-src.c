#include<stdio.h>
#include<stdlib.h>
int main()
{
	 for(;;)
	 {
 		long long int n,i,m,sum=0;
 		scanf("%lld %lld",&n,&m);
 		int *c;
		 	c=(int*)malloc((n+1)*sizeof(int));
 		
 		if(n==-1&&m==-1)
 		break;
 		else
 		{
	 	    long long int p=n;
		 	for(i=1;i<=n;i++)
			 {  if(i==n)	 
	 		    scanf("%d",&c[i]);
	 		     else  
	 		    scanf("%d ",&c[i]);
	 			sum+=p*c[i];
	 		
	 			--p;
			 }
			 
		 }
		 printf("%lld\n",sum*m);
 		
		 
 	}
}
