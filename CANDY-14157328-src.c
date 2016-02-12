#include<stdio.h>
int main()
{
   int n;
   while(1)
   {
      scanf("%d",&n);
      if(n==-1)
      break;
      int i,candy[10005];
      long long int sum=0,each,move=0;
      for(i=0;i<n;++i)
      {
       scanf("%d",&candy[i]);
       sum+=candy[i];
      }
      if(sum%n==0)
      {
        each=sum/n;
        for(i=0;i<n;++i)
        {
           if(candy[i]<each)
           move+=each-candy[i];
        }
        printf("%lld\n",move);
      }
      else
      printf("-1\n");

   }
    return 0;
}
