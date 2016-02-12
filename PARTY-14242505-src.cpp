#include<iostream>
#include<cstdio>
int main()
{
   int budget,noparties;
   while(1)
   {
       scanf("%d %d",&budget,&noparties);
       if(budget==0&&noparties==0)
       break;
       else
       {
           int fun[110],cost[110],i;
            for(i=0;i<noparties;++i)
              scanf("%d %d",&cost[i],&fun[i]);
          int c,K[noparties+1][budget+1];
          for(i=0;i<=noparties;++i)
          {
             for(c=0;c<=budget;++c)
             {
               if(i==0||c==0)
                 K[i][c]=0;
                 else if(cost[i-1]>c)
                 K[i][c]=K[i-1][c];
                 else
                 K[i][c]=K[i-1][c]>=(K[i-1][c-cost[i-1]]+fun[i-1])?K[i-1][c]:(K[i-1][c-cost[i-1]]+fun[i-1]);
            }
          }
          int max=0,q;
          for(c=0;c<=budget;++c)
          {
              if(K[noparties][c]>max)
              {
                 max=K[noparties][c];
                 q=c;
              }
          }
          printf("%d %d\n",q,max);
       }
       printf("\n");
   }
   return 0;
}
