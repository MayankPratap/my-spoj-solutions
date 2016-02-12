#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
	char str1[500],str2[500],str3[500],ch,str4[500];
	str2[0]='\0';
	str3[0]='\0';
	str4[0]='\0';
	int len,i;
	
	int n;
	for(;;)
	{ 
	  scanf("%s",str1);
	  len=strlen(str1);
	  if(str1[0]=='.')
	  break;
	  scanf(" %d",&n);
	  for(i=1;i<=n;i++)
	  strcat(str4,str1);
	  if(n==1)
	  strcpy(str4,str1);
	  printf("%s\n",str4);
	  strcpy(str2,str4);
	  strcpy(str3,str4);
	  len=strlen(str3);
	  ch=str3[len-1];
	  for(i=(len-1);i>=0;i--)
	  {
	  	str3[i]=str3[i-1];
	  	
	  }
	  str3[0]=ch;
	  for(;;)
	  {
	  	ch=str2[0];
	  	for(i=0;i<len;i++)
	  	{
	  		str2[i]=str2[i+1];
	  	}
	  	str2[len-1]=ch;
	  	
	  	if(!(strcmp(str2,str3)))
	  	{
            	printf("%s\n",str2);
            	break;
	    }
	    else
	    {
	    	printf("%s\n",str2);
	    }
	  }

str4[0]='\0';
} return 0;}