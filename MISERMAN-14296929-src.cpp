#include<bits/stdc++.h>
int min2(int a,int b)
{
    if(a<b)
    return a;
    return b;
}
int min3(int a,int b,int c)
{
     if(a<b)
     {
         if(a<c)
            return a;
         return c;
     }
     else
     {
        if(b<c)
            return b;
        return c;
     }

}
int main()
{
   int n,m;
   while((scanf("%d %d",&n,&m))==2)
   {
       int i,j,A[105][105],S[105][105]={0};
       for(i=0;i<n;++i)
       {
           for(j=0;j<m;++j)
           {
               scanf("%d",&A[i][j]);
               if(i==0)
                   S[i][j]=A[i][j];
               else if(i!=0&&j==0)
                    S[i][j]=A[i][j]+min2(S[i-1][j+1],S[i-1][j]);
               else if(i!=0&&j==m-1)
                    S[i][j]=A[i][j]+min2(S[i-1][j-1],S[i-1][j]);
               else
                    S[i][j]=A[i][j]+min3(S[i-1][j-1],S[i-1][j],S[i-1][j+1]);
           }
       }
       i=n-1;
       int min=S[i][0];
       for(j=1;j<m;++j)
        min=min2(min,S[i][j]);
       printf("%d\n",min);
   }
    return 0;
}
