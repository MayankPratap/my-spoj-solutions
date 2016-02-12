#include<stdio.h>
long long int r[1005]={0},R[1005]={0};
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,i,j;
       scanf("%d",&n);
       for(i=1;i<=n;++i)
       scanf("%lld %lld",&r[i],&R[i]);
       int dring;
       for(i=1;i<=n;++i)
       {
           for(j=1;j<=n;++j)
           {   if(i==j)
               continue;
               if(r[i]<=R[j])
               {
                   dring=-1;
                   break;
               }
               dring=i;
           }
           if(dring!=-1)
            break;
       }
       printf("%d\n",dring);
   }
   return 0;
}
