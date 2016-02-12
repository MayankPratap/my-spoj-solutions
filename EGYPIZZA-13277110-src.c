#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int count=0,flag=0,tag=0,sum=0;;
	for(i=1;i<=n;++i)
	{   int a,b;
		scanf("%d/%d",&a,&b);
		float d=(float)a/b;
		if(d==0.250000)
		count++;
		else if(d==0.500000)
		flag++;
		else if(d=0.750000)
		tag++;
     }
    
   
	float b=count/2.0; 
	float c=flag;
		if(count==tag)
		{
			if(flag%2==1)
			{
				sum=count+((flag/2)+1);
			}
			else
			{
				sum=count+((flag/2));
			}
		}
	    else if(c==b&&count!=tag)
		{
			sum=(flag+tag);
		}
		else if(c!=b&&count>tag)
		{		int p,q;
				p=count-tag;
			if(flag%2==0)
			{   if(p<5)
				  sum=(flag/2)+tag+1;
				  else
				    sum=(flag/2)+tag+1+p/4;
			}
			else
			{
				if(p<3)	
					sum=(flag/2)+tag+1;
				else
				   if(p-2<5)
				   sum=(flag/2)+tag+2;
				   else	
			       sum=(flag/2)+tag+2+(p-2)/4;
				
			}	
	}
		 else if(c!=b&&count<tag)
		{    if(flag%2==1)
		    {
			 sum=((flag/2)+1)+tag;
	       	}
		   else
		   {
		   	sum=(flag/2)+tag;
		   }
			 
		}
	
		printf("%d\n",(sum+1));
		
	return 0;
}
