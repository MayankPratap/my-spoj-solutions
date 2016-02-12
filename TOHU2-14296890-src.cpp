#include<bits/stdc++.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=1;i<=t;++i)
	{
		char ch[100];
		 int j,a[100];
		for(j=1;j<=99;++j)
		scanf("%d %c",&a[j],&ch[j]);
		int count=0;
		for(j=9;j<73;j+=9)
		{
			if(ch[j]!=ch[j+9])
			{
				printf("NO\n");
				++count;
			    break;
			}
			
		}
		if(count==0)
		{
			printf("YES\n");
		}
		
	}
	return 0;
}