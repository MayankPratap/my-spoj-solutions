#include<stdio.h>
int main()
{  int a,b,c;
	for(;;)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0)
		break;
		else
		{
			if(c-b==b-a)
				printf("AP %d\n",c+b-a);
	        else
	            printf("GP %d\n",c*(b/a));
		}
	}
	return 0;
}