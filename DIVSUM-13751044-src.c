#include<stdio.h>
int power(int base,int expo)
{
    if(expo==0)
    return 1;
    if(expo%2==0)
    return power(base*base,expo/2);
    return base*power(base,expo-1);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,i;
    scanf("%d",&n);
    int m=n;
    int ans=1;
    for(i=2;i*i<=n;++i)
    {   int count=0,sum=0;
        while(n%i==0)
        {
          n=n/i;
          ++count;
        }
        int j;
        for(j=0;j<=count;++j)
           sum+=power(i,j);
        ans*=sum;
    }
    if(n>1)
    {
        ans*=1+n;
    }
    printf("%d\n",ans-m);
  }
  return 0;
}
