#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main()
{
	int l;
	while(1)
	{
		scanf("%d",&l);
		if(l==0)
	   break;
		else
		printf("%0.2f\n",(l*l)/(2*(M_PI)));
	}
	return 0;
}