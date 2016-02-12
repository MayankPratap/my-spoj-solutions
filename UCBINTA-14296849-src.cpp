#include<iostream>
#include<cstdio>
#include<cstdlib>
int main()
{
  int n;
     while((scanf("%d",&n))==1)
     {
       int **s;
       s=(int **)malloc(n*sizeof(int*));
       int i,j;
       for(i=0;i<n;++i)
       s[i]=(int*)malloc(n*sizeof(int));
       for(i=0;i<n;++i)
      {
         for(j=0;j<n;++j)
        {
            if(j==n-1)
            scanf("%d",&s[i][j]);
            else
            scanf("%d ",&s[i][j]);
        }
       }
      if(n==2)
      printf("%d %d\n",s[0][1]/2,s[0][1]/2);
      else
     {
       int diff=s[0][2]-s[0][1];
       int sum=s[1][2];
       int a2=(sum+diff)/2;
       int a0=s[0][2]-a2;
       printf("%d ",a0);
       for(j=1;j<n;++j)
      {
         if(j==n-1)
         printf("%d\n",s[0][j]-a0);
         else
         printf("%d ",s[0][j]-a0);
      }
    }
     }
    return 0;
}
