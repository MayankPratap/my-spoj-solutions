#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,t;
	 int k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{  printf("\n");
		int g,m,*ng,*nm,temp;
		scanf("%d %d",&g,&m);
		ng=(int*)malloc(g*sizeof(int));
		nm=(int*)malloc(m*sizeof(int));
		int maxg=0,maxm=0;
		for(j=0;j<g;j++)
		{ if(j==g-1)
		  {
		   scanf("%d",&ng[j]);
		    if(ng[j]>=maxg)
		    maxg=ng[j];
		  }
		  else
		  {
		    scanf("%d ",&ng[j]);
		    if(ng[j]>=maxg)
		    maxg=ng[j];
		  }
	    }
		for(j=0;j<m;j++)
		{  if(j==m-1)
		  {
		   scanf("%d",&nm[j]);
		   if(nm[j]>=maxm)
		   maxm=nm[j];
	      }
		  else
		  { 
		    scanf("%d ",&nm[j]);
		    if(nm[j]>=maxm)
		    maxm=nm[j];
		  }
	    }
		
		if(maxg>=maxm)
		printf("Godzilla\n");
		else
		printf("MechaGodzilla");
          free(ng);
		  free(nm);		
	}

	return 0;
}
