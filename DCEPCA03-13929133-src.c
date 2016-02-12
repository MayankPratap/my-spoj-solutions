#include<stdio.h>
#include<math.h>
double tot(int n)
{
   int m=n;
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
       ans*=1-(1/(double)i);
    }
    if(n>1)
    ans*=1-(1/(double)n);
    ans*=m;
    return ans;
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     int n;
     scanf("%d",&n);
     int i;
     double sum=0;
     for(i=1;i<=n;++i)
     {
       sum+=tot(i);
     }
     printf("%0.0lf\n",sum*sum);
  }
  return 0;
}
