#include<stdio.h>
int main()
{
   long long int n,m,count=0;
   scanf("%lld",&n);
   int flag=0;
   int arr[8105]={0};
   if(n==1)
    printf("-1\n");
   else
   {
       while(1)
      {
          int sum=0,b;
          while(n)
         {
           b=n%10;
           n=n/10;
           sum+=b*b;
         }
       n=sum;
        if(arr[sum]==0)
       {
        arr[sum]=1;
        ++count;
       }
         else if(arr[n]==1)
        {
         ++flag;
         break;
        }
     }
      if(flag!=0&&n!=1)
      printf("-1\n");
      else
      printf("%lld\n",count);
   }
   return 0;
}
