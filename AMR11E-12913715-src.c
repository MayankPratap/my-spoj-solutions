#include<stdio.h>
int main()
{   int i,j,k,l,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{   int n,tag=0;
        scanf("%d",&n);
        for(j=30;;j++)
        {  int flag=0;
        	for(k=2;k<j;k++)
        	{   int count=0;
	        	if(j%k==0)
	        	{
	        		for(l=1;l<=k;l++)
	        		{
		        		if(k%l==0)
		        		count++;
		        		
		        	}
		        	if(count==2)
		        	{
	        			flag++;
	        		}
	        	}
	        
	             if(flag>=3)
	            {
	              tag++;
	              break;
       	        }
        	}
        	if(tag==n)
        	{
	        	break;
	        }
        	
        }
        printf("%d\n",j);
	}
	return 0;
}