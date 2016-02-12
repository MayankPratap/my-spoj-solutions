#include<stdio.h>
#include<stdlib.h>

int main()
{   int t,i,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int n,m,a,b,gcd;
		scanf("%d %d",&n,&m);
		if(m==0)
		{
			printf("Case #%d: 1/1\n",i);
			continue;
		}
		else
		{
		
		    int *f;
		    f=(int*)malloc(m*sizeof(int));
		    int max=0;
		      for(j=0;j<m;++j)
		     {  if(j==m-1)
		     scanf("%d",&f[j]);
		     else
		     scanf("%d ",&f[j]);
	          if(f[j]>=max)
       		  max=f[j];
       	
		     }
	    
		    if((n-max)==0)
		    printf("Case #%d: 0/1\n",i);
		    else
		    {
		    	a=n-max;
		    	b=n;
		    	for(;;)
		    	{
		    		if(a==0&&b!=0)
		    		{
		    			gcd=b;
		    			break;           /* Euclid's algorithm for HCF*/
		    		}
		    		else if(a!=0&&b==0)
		    		{
		    			gcd=a;
		    			break;
		    		}
		    		else
		    		{
		    			m=b%a;
		    			b=a;
		    			a=m;
		    			
		    		}
		    		
		          
		        }
		        int c=(n-max)/gcd;
		    		int d=n/gcd;
		          printf("Case #%d: %d/%d\n",i,c,d);
		    	
		    }
		    
		    	
		}
		
		
	}
	return 0;
}
		
		/*
		gcd=hcf(n-max,n);
      a=(n-max)/gcd;
	  b=n/gcd;		
		printf("Hello");
		
	}
	return 0;
}
	int hcf(int a,int b)
	{
		int i,gcd;
		for(i=1;i<=a;i++)
			if(a%i==0&&b%i==0)
			gcd=i;
		return gcd;
	}

*/
