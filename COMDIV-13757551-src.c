#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int hcf=gcd(a,b);
        int i,ans=1;
        for(i=2;i*i<=hcf;++i)
        {   int count=0;
            while(hcf%i==0)
            {
                hcf=hcf/i;
                count++;
            }
            ans*=count+1;
        }
        if(hcf>1)
          ans*=2;
        printf("%d\n",ans);
    }
    return 0;
}