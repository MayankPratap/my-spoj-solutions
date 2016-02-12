#include<stdio.h>
#include<stdlib.h>
int main()
{   int i;
   for(i=1;;++i)
  {     
	int *time,*attmpt,count=0,sum=0,tag=0,j;
	time=(int*)malloc(3*sizeof(int));
	
	attmpt=(int*)malloc(3*sizeof(int));
      for(j=0;j<3;++j)
     {  
   	     if(scanf("%d ",&time[j])!=EOF)
   	     {
   	     	continue;
   	     }
   	     else
   	     {
   	     	tag++;
   	     	break;
   	     }
   	     
     }
     if(tag!=0)
     {
     	break;
     }
   
    for(j=0;j<3;++j)
    {
        if(j==0)
      {
    
       if(scanf("%d",&attmpt[j])!=EOF)
        continue;
       else
       {
     	++tag;
     	break;
       }
      }
      else
      {   if(scanf(" %d",&attmpt[j])!=EOF)
        continue;
       else
       {
     	++tag;
     	break;
       }
      }
    }
    if(tag!=0)
    break;
   for(j=0;j<3;++j)
   {
   	  if(time[j]!=0)
   	  {
   	  	  if(attmpt[j]==1)
   	  	  {
   	  	  	 ++count;
   	  	  	 sum+=time[j];
   	  	  }
   	  	  else
   	  	  {
   	  	  	 ++count;
   	  	  	 sum+=time[j]+(attmpt[j]-1)*60*20;
   	  	  }
   	  }
   }
   printf("team %d: %d, %d\n",i,count,sum);
   free(time);
   free(attmpt);
} 
   return 0;
}
