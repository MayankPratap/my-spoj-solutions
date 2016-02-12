#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{   unsigned long long int k,j,flag=0;
	     long long int m,b;
		scanf("%llu",&k);
		for(j=192;;j+=250)
		{  			
			++flag;
			  if(flag==k)
			  {
				printf("%llu\n",j);
				break;
		      }  	
		}
	}

	return 0;
}
