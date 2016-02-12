#include<stdio.h>
#include<math.h>

int main()
{  
	for(;;)
	{   
	 	long long int a,b,hcf;
		 double c,d;
		  int m=1000,n=37;
          scanf("%lld %lld",&a,&b);
          if(a==-1&&b==-1)
          break;
	    c=(double)a/b;
	    d=(double)m/n;
	    if(c>d)
	    {
	    if((c-d)<0.0000000000000001)
     	printf("Y\n");
     	else
     	printf("N\n");
        }
        else
        {
        	if((d-c)<0.0000001)
        	printf("Y\n");
        	else
        	printf("N\n");
        }
    }
	return 0;
} 
