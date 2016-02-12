#include<stdio.h>
#include<math.h>
int main()
{   
	  int i,n,m,a=0,b=1,c,sum=0;
	  while((scanf("%d",&n))==1)
	  {	  
	    m=n;
	      for(i=1;i*i<=n;++i)
	     {
		   sum+=m-a;
		   ++b;
		   ++a;
		   m=n/b;
	     }
	    printf("%d\n",sum);
      }
	return 0; 
}
