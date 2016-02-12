#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int c,i,j,len; 

	scanf("%d",&c);
	for(j=1;j<=c;++j)
	{    	char str[1000];
        int index[364]={0};
         
	     scanf("\n%[^\n]s",str);
	   		len=strlen(str);
	 
		int max=0,p;
		for(i=0;i<len;++i)
		{
			if(str[i]!=' ')
			{
			  ++index[(int)str[i]];
			  	if(index[(int)str[i]]>max)
		      	{
			   max=index[(int)str[i]];
			   p=(int)str[i];
		        }
		     }
	   }  int count=0;
	     for(i=65;i<91;++i)
	     {
	     	  if(index[i]==max&&i!=p)
	     	  count++;
	     }
	     if(count==0)
	     {
		   int d;
		   if(p>=69)
		    d=p-69;
		   else
		     d=p-43;
		    printf("%d ",d);
		    for(i=0;i<len;++i)
		    {
		  	   if(str[i]!=' ')  
		  	{
		  		if(str[i]-d>=65)
		  	     printf("%c",str[i]-d);
		  	     else
		  	      printf("%c",str[i]-d+26);
		  	}
		  	  else
		  	  printf("%c",str[i]);
		    }
		  printf("\n");
	    }
	    else
	    {
	    	printf("NOT POSSIBLE\n");
	    }
	
	}	
	return 0;
}