#include<stdio.h>
#include<stdlib.h>
int prime(long long int p){
    long long int j,k,count=0;
    if(p%2==0||p==1)
    return 0;
    else
    {
        for(j=2;j*j<=p;++j)
        {
            if(p%j==0)
            count++;
        }
        if(count)
        return 0;
        else
        return 1;
    }
}

int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;++k)
    {
       int n,tmp;
       long long int m=1;
       scanf("%d",&n);
       long long int i,j;
       for(i=1;i<=n;++i)
       {
          if(i==n)
          {
            scanf("%d",&tmp);
            m*=tmp;
          }
          else
          {
            scanf("%d ",&tmp);
            m*=tmp;
          }
       }
       m+=1;
       for(i=1;i*i<=m;++i)
       {

          if(m%i==0)
          {
              if(prime(m/i))
              {
                  printf("Case #%d: %d\n",k,m/i);
                  break;
              }

          }

       }
    }
    return 0;
}
