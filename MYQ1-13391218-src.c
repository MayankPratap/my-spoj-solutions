#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i)
    {   long long int n,j,row;
    	scanf("%lld",&n);
    	if(n==1)
    	{
    	  printf("poor conductor\n");
    	  continue;
        }
    	else if(n%10==1||n%10==6)
    	{ 	for(j=n;;--j)
    		{
    			if(j%5==0)
    			{
    				row=j/5;
    				break;
    			}
    		}
    	}
    	else
    	{    
    		for(j=n;;++j)
    		{
    			if(j%5==0)
    			{
    				row=j/5;
    				break;
    			}
    		}
    	}
    	 int b=n%10;
    	 char seatpos,dir;
    	if(b==2||b==1)
    	{
    		seatpos='W';
    		dir='L';
    		printf("%lld %c %c\n",row,seatpos,dir);
    	}
    	else if(b==3||b==0)
    	{
    		seatpos='A';
    		dir='L';
    		printf("%lld %c %c\n",row,seatpos,dir);
    	}
    	else if(b==4||b==9)
    	{
    		seatpos='A';
    		dir='R';
    		printf("%lld %c %c\n",row,seatpos,dir);
    	}
    	else if(b==5||b==8)
    	{
    		seatpos='M';
    		dir='R';
    		printf("%lld %c %c\n",row,seatpos,dir);
    	}
    	else if(b==6||b==7)
    	{
    		seatpos='W';
    		dir='R';
    		printf("%lld %c %c\n",row,seatpos,dir);
    	}
    }
    return 0;
}
