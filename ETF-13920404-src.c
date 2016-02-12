#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,m;
    scanf("%d",&n);
    if(n==1)
    printf("1\n");
    else{
    m=n;
    int i,count;
    double ans=1;
    for(i=2;i*i<=n;++i)
    {  count=0;
       while(n%i==0)
       {
          n=n/i;
          count++;
       }
       if(count)
       ans*=(double)1-(1/(double)i);
    }
    if(n>1)
    ans*=(double)1-(1/(double)n);
    ans*=m;
    printf("%0.0lf\n",ans);
    }
  }
  return 0;
}
