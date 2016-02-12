#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,k,*a,*b,*c,count=0,min=0,max=0;
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	c=(int*)calloc(10000,sizeof(int));
	for(i=0;i<n;++i)
	{
		scanf("%d %d",&a[i],&m);
		b=(int*)calloc(m,sizeof(int));
		for(j=0;j<m;++j)
		{
			scanf(" %d",&b[j]);
			if(b[j]<min)
			min=b[j];
			if(b[j]>max)
			max=b[j];
			    ++c[b[j]];
			
			
		}
	}
	for(i=min;i<=max;++i)
	{
		if(c[i]>0)
		{   int flag=0;
		   for(k=0;k<n;++k)
            {
            	if(i==a[k])
            	{  ++flag;
            	  break;
                }
            }
            if(flag==0)
            count++;
                  	
        }
            
    }		
	    

	printf("%d",count);
	return 0;
}
