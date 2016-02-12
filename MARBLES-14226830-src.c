#include<stdio.h>
long long getResult(int n,int k)
{
     int i,nume,deno;
     long long result=1;
     int r=k<=n-k?k:n-k;
     for(i=1;i<=r;++i)
     {
         result*=n;
         result/=i;
         n--;
     }
     return result;
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int n,k,i;
      scanf("%d %d",&n,&k);
      printf("%lld\n",getResult(n-1,k-1));
  }
  return 0;
}
