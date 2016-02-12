#include<stdio.h>
#include<stdlib.h>
int main()
{  int t,i;
   scanf("%d",&t);
    for(i=1;i<=t;++i)
    {  int k,j,n;
        scanf("%d",&n);
		int a[193];
	    for(k=0;k<192;++k)
	    {
	    	a[k]=0;
	    }
	    a[192]=1;
	    for(j=2;j<=n;++j)
	    {    int b=0;
	    	for(k=192;k>=0;--k)
	    	{    
	    		int m=a[k]*j;
	            m+=b;
	    		if(m<10)
	    		{
	    	         a[k]=m;
	    	         b=0;
	    		}
	    		else
	    		{
	    			a[k]=m%10;
	    	        b=m/10;   
	    		}
	    	}
	    }
	    int count=0;
	    for(k=0;k<193;++k)
	    {  
	    	if(a[k]!=0||count!=0)
	    	{
	    		++count;
	    		printf("%d",a[k]);
	    	}
	    }
	    printf("\n");
	}
}

