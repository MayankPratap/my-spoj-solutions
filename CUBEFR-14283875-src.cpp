#include<iostream>
#include<cstdio>
using namespace std;
int a[1000100];
int b[1000100];
int binarySearch(int l,int r,int x)
{
   while(l<=r)
   {
      int m=l+(r-l)/2;
      if(b[m] == x) return m;
      if(b[m] < x) l=m+1;
      else r=m-1;
   }
}
int main(){
    int t,i,tmp,store;
    scanf("%d",&t);
    for(i=2;i<=100;++i){
         tmp=i*i*i;
         store=tmp;
         while(tmp<=1000000){
            a[tmp]=1;
            tmp=tmp+store;
        }
    }
   int j=2;
    b[0]=0,b[1]=1;
    for(i=2;i<=1000000;++i){
        if(a[i]!=1){
           b[j]=i; 
           ++j;
        }
    }
    int k,n;
    for(k=1;k<=t;++k){
        scanf("%d",&n);
        if(a[n]==1)
            printf("Case %d: Not Cube Free\n",k);  
        else{
        
         int l=1,r=j;
         printf("Case %d: %d\n",k,binarySearch(l,r,n));     
        }

    }

    return 0;
}








