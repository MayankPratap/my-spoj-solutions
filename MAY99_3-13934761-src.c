#include<stdio.h>
int check(long long int x,long long int y,long long int z)
{   int i,flag=0,count=0;
       for(i=1;i*i<=x;++i)
       {
          if(i*i==x)
          {
             if(y%i==0)
             {
               ++flag;
               if(z%i==0)
                 ++count;
             }
          }
          else
          {
              if(x%i==0&&y%i==0)
              {
                 ++flag;
                 if(z%i==0)
                 ++count;
              }
              if(x%(x/i)==0&&y%(x/i)==0)
              {
                ++flag;
                if(z%(x/i)==0)
                ++count;
              }
          }
       }
       if(flag==count)
       return 1;
       else
       return 0;
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     long long int x,y,z;
     scanf("%lld %lld %lld",&x,&y,&z);
     if(z>x&&z>y)
     printf("NO\n");
     else if(check(x,y,z))
     printf("YES\n");
     else
     printf("NO\n");
  }
  return 0;
}
