#include<stdio.h>
#include<math.h>
long long int power(long long int base,long long int expo)
{
    if(expo==0)
    return 1;
    if(expo%2==0)
    return power(base*base,expo/2);
    return base*power(base,expo-1);
}
int isfibbonaci(long long int ans)
{
    long long int res1=5*ans*ans+4;
    long long int res2=5*ans*ans-4;
    long long int sqrt1=floor(sqrt(res1));
    long long int sqrt2=floor(sqrt(res2));
    if(sqrt1*sqrt1==res1)
        return 1;
    else if(sqrt2*sqrt2==res2)
        return 1;
    else
    return 0;

}
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;++k)
    {
        long long int n,m,p;
        scanf("%lld %lld",&n,&m);
        p=n;
        long long int ans=1,i;
        for(i=2;i*i<=n;++i)
       {
         long long int count=0,sum=0;
         while(n%i==0)
         {
          n=n/i;
          ++count;
         }
         long long int j;
         for(j=0;j<=count;++j)
         sum+=power(i,j);
         ans*=sum;
       }
        if(n>1)
       {
        ans*=1+n;
       }
       long long int res=(ans-p)%m;
       ans=1;
       for(i=2;i*i<=res;++i)
       {
           long long int count=0;
           while(res%i==0)
           {
               res=res/i;
               ++count;
           }
           ans*=count+1;
       }
       if(res>1)
        ans*=2;
        if(ans!=1)
        ans=ans-1;
       if(isfibbonaci(ans))
        printf("Case #%d : YES.\n",k);
       else
        printf("Case #%d : NO.\n",k);
    }
    return 0;
}
