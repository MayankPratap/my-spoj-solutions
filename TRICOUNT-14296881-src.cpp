#include<bits/stdc++.h>
int main()
{
    unsigned long long int t,i;
	scanf("%llu",&t);
	for(i=1;i<=t;++i)
	{
        unsigned long long int n,j;
		scanf("%llu",&n);
		unsigned long long int sumn,sumi;
		sumn=(n*(n+1)*(n+2))/6;
		sumi=(n*(n+2)*(2*n-1))/24;	
		printf("%llu\n",sumn+sumi);
	}
	return 0;
}
