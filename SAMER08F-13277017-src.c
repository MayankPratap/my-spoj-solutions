#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	
	for(;;)
	{
		scanf("%d",&n);
		long int sum=0;
		if(n==0)
		break;
		else
		{    int i,j=1;
		   
			for(;j<=n;j++)
			{ 
				sum+=(j*j);
			}
		}
		printf("%ld\n",sum);
	}
	return 0;
}