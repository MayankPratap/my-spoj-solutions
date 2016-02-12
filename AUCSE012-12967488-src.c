#include<stdio.h>
#include<stdlib.h>
int main()
{
long long int n,i,j,sum=0,count=1;
int *a,*b;
scanf("%lld",&n);
a=(int*)malloc(n*sizeof(int));
b=(int*)calloc(100,sizeof(int));

for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);  
  b[a[i]]++;  
}
for(i=99;i>=0;i--)
{
	
	for(j=0;j<b[i];j++)
	{
	   sum+=(i+1);
	   if(sum<n)
	   { count++;   	
	   continue;
	   }
	   else
        break;
    }
    if(sum>=n)
    break;
}
printf("%lld",count);
return 0;
}
