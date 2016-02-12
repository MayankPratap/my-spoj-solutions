#include<bits/stdc++.h>
int max2(int a,int b){
if(a>b)
return a;
return b;
}
int max3(int a,int b,int c){
if(a>b){
    if(a>c)
        return a;
    return c;
}
else{
    if(b>c)
        return b;
    return c;
}
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
   {
     int h,w,i,j;
     scanf("%d %d",&h,&w);
     int mar[105][105],cache[105][105]={0};
     for(i=0;i<h;++i)
        for(j=0;j<w;++j)
        {
          scanf("%d",&mar[i][j]);
         }

     for(i=0;i<h;++i)
        for(j=0;j<w;++j)
       {
           if(i==0)
            cache[i][j]=mar[i][j];
            else if(j==0)
            cache[i][j]=mar[i][j]+max2(cache[i-1][j],cache[i-1][j+1]);
            else
            cache[i][j]=mar[i][j]+max3(cache[i-1][j],cache[i-1][j-1],cache[i-1][j+1]);

       }
          i=h-1;
       //  int r=cache[h-1][0];
         //for(j=1;j<w;++j)
           // r=max2(r,cache[i][j]);
           int max=0;
           for(j=0;j<w;++j)
           {
               if(cache[i][j]>max)
                max=cache[i][j];
           }
           printf("%d\n",max);

 }
   return 0;
}
