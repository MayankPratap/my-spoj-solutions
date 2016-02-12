#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,m,i,j;  /*misspelled position m*/  /*t is number of test cases*/
	scanf("%d",&t);
	char *str;
	str=(char*)malloc(81*sizeof(char));
	for(i=1;i<=t;i++)
	{
		scanf("%d %s",&m,str);
		int j=m-1;
	   for(j=m-1;;j++)
		{
			if(str[j]=='\0')
			break;
			else
			str[j]=str[j+1];
		}
		printf("%d %s\n",i,str);
	}
	return 0;
}