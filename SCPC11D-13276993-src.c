#include<stdio.h>
int main()
{  int a,b,c;

	for(;;)
	{   
	 	scanf("%d %d %d",&a,&b,&c);
	 	if(a==0&&b==0&&c==0)
	 		break;
		 if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		 printf("right\n");
		 else
		 printf("wrong\n");	
    }
	return 0;
} 