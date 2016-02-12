#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int t,i;
	scanf("%lld",&t);
	for(i=1;i<=t;++i)
	{
		int n,j,k;
		scanf("%d",&n);
		char (*str)[4];
		str=(char(*)[4])malloc(n*4*sizeof(char));
		for(k=0;k<n;++k)
		scanf("%s",str[k]);
		for(k=0;k<n-1;++k)
		{
			if(strcmp(str[k],str[k+1]))
			{
				strcpy(str[k+1],"lxh");
			}
			else
			{
				strcpy(str[k+1],"hhb");
			}
		}	
		printf("%s\n",str[k]);
		
	}
	return 0;
}
