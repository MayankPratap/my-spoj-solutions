#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	printf("\n");
	while(t--)
	{
		int a=0,b=0,c=0,num1=0,num2=0,p,q,r;
		char str[1000];
		scanf("\n%[^\n]s",str);
		int i=0;
		while(str[i]!='\0')
		{
			if(str[i]=='+')
				p=i;
			else if(str[i]=='=')
			    q=i;
			++i;    
		}
		
		r=i;
		i=0;
		while(str[i]!='\0')
		{
			if(str[i]=='m')
			{
				if(i<p)
				{
					c=1;
					break;
				}
				if(i>p&&i<q)
			   {
			   	    b=1;
			   	    break;
			   }
			   if(i>q)
			   {
			   	  a=1;
			   	  break;
			   }
			}
			++i;
		}
		int x,y;
		if(a==1)
		{
			x=p-1;
			y=q-p-3;
			for(i=0;i<p-1;++i)
			{
				num1+=((int)str[i]-48)*pow(10,x-1);
				--x;
			}
			for(i=p+2;i<q-1;++i)
			{
				num2+=((int)str[i]-48)*pow(10,y-1);
				--y;
			}
			printf("%d + %d = %d\n",num1,num2,num1+num2);
		}
		else if(b==1)
		{
			x=p-1;
			y=r-q-2;
			for(i=0;i<p-1;++i)
			{
				num1+=((int)str[i]-48)*pow(10,x-1);
				--x;
			}
			for(i=q+2;i<r;++i)
			{
				num2+=((int)str[i]-48)*pow(10,y-1);
				--y;
			}
			printf("%d + %d = %d\n",num1,num2-num1,num2);
		}
		else if(c==1)
		{
			x=q-p-3;
			y=r-q-2;
			for(i=p+2;i<q-1;++i)
			{
				num1+=((int)str[i]-48)*pow(10,x-1);
				--x;
			}
			for(i=q+2;i<r;++i)
			{
				num2+=((int)str[i]-48)*pow(10,y-1);
				--y;
			}
			printf("%d + %d = %d\n",num2-num1,num1,num2);
		}
		printf("\n");
	}
	return 0;
}
