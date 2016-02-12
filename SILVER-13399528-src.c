#include<stdio.h>
#include<math.h>
int main()
{
	for(;;)
	{   int b[20005];
		int n;
		scanf("%d",&n);
		if(n==0)
		break;
		else
		{
			int i=1,a=0,count=1;
			for(i=1;;i++)
			{
				if(pow(2,i)-1>=n)
				break;
			}
		    printf("%d\n",i-1);
		}
	}
	return 0;
}