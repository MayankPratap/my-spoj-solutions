#include<stdio.h>
#include<stdlib.h>
int main()
{int c,i;
char *a,*b;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{   int count=0;
		a=(char*)calloc(13,sizeof(char));
		b=(char*)calloc(13,sizeof(char));
scanf("%s  %s",a,b);
puts(b);
	    
	 free(a);
	 free(b);	
		
	}
	return 0;
}