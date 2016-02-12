#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		else
		{
			
			char str[205];
			scanf("\n%s",str);
			int len=strlen(str);
			int i,row,a=1;
			int c=n;
		if(n!=0)
		{   if(len%n==0)
		     row=len/n;
		     else
		     row=len/n+1;
			for(i=0;i<n;++i)
			{
				int count=1,p=i,j;
				for(j=1;j<=row;++j)
				{
					if(count%2!=0)
					{   
						printf("%c",str[p]);
						p=p+2*c-1;
					}
					else
					{
						printf("%c",str[p]);
						p=p+a;
					}
					count++;
				}
				a+=2;
				c--;
			}
			printf("\n");
		}
		}
	}
}
