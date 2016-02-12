#include<stdio.h>
#include<string.h>

int main()
{   for(;;)
    {
            
	  char str[1020],ch,dh;
	  gets(str);
	   if(strcmp(str,"*"))
	  {   int count=0,i,flag=0;
		  for(i=0;;i++)
		  {
		  	if(str[i]!='\0')
		  	{
		  	    if(str[i]==' ')
		  	    {  count++;
		  	    	if((int)str[i+1]>=65&&(int)str[i+1]<=90)
		  	    	{
		  	    		str[i+1]=str[i+1]+32;
		  	    	}
		  	    	if((int)str[0]>=65&&(int)str[0]<=90)
		  	    	{
		  	    		str[0]=str[0]+32;
		  	    	}
		  	    	if(str[i+1]==str[0])
		  	    	{
		  	    		flag++;
		  	    	}
		  	    	else
		  	    	{
		  	    		break;
		  	    	}
		  	    }
		  	}
		  	else
		  	{
		  		break;
		  	}
		  }
		  	if(count==flag)
		  	{
		  		printf("Y\n");
		  	}
		  	else
		  	{
		  		printf("N\n");
		  	}
		
	  }
	  else
	  {
	  	break;
	  }
	 
   }
    return 0;
}
