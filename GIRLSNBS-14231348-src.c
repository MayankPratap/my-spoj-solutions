#include<stdio.h>
int main()
{
    while(1)
    {
        int g,b,ans;
        scanf("%d %d",&g,&b);
        if(g==-1&&b==-1)
        break;
        else
        {
           if(g==b&&g!=0)
           ans=1;
           else if(g==0&&b!=0)
           ans=b;
           else if(b==0&&g!=0)
           ans=g;
           else if(b==0&&g==0)
           ans=0;
           else
           {
             if(b<g)
             {
                  if(g%(b+1)==0)
                  ans=g/(b+1);
                  else
                  ans=g/(b+1)+1;
              }
              else
              {

                  if(b%(g+1)==0)
                  ans=b/(g+1);
                  else
                  ans=b/(g+1)+1;
              }
           }
        }
        printf("%d\n",ans);
    }
   return 0;
}
