#include<stdio.h>
int main()
{
	for(;;)
	{
		float n;
		scanf("%f",&n);
		if((n-0.00)==0.000000)
		break;
		else
		{
			int i,a=1,b=2;
			float sum=0;
			for(i=1;;++i)
			{
				sum+=(float)a/b;
				if(sum>=n)
				{
					printf("%d card(s)\n",i);
					break;
				}
				else
				++b;
				
			}
		}
	}
	return 0;
}
