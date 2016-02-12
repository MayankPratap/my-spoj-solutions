#include<stdio.h>
int main()
{ int n;
  while(scanf("%d",&n))
  {
     if(n==0)
     break;
     else
     {
       int arr[100005],brr[100005];
       int i;
       for(i=1;i<=n;++i)
       {  if(i==n)
          scanf("%d",&arr[i]);
          else
          scanf("%d ",&arr[i]);
       }
       for(i=1;i<=n;++i)
       brr[arr[i]]=i;
       int count=0;
       for(i=1;i<=n;++i)
       {
           if(arr[i]==brr[i])
           count++;
           else
           break;
       }
       if(count==n)
       printf("ambiguous\n");
       else
       printf("not ambiguous\n");
     }
  }
  return 0;
}
