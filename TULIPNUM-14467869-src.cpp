#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>

using namespace std;
int arr[100005],track[100005],n;
void precompute(){

     int i,j,flag=1;
     track[1]=1;
     for(i=2;i<=n;++i){

          if(arr[i]!=arr[i-1])
              ++flag;
          track[i]=flag;

     }

}
int main(){

    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;++k){
          
         int q,i;
         scanf("%d %d",&n,&q);
         memset(track,0,sizeof track);
         for(i=1;i<=n;++i)
             scanf("%d",&arr[i]);
         precompute();
         printf("Case %d:\n",k);
         int a,b;
         for(i=1;i<=q;++i){
              
               scanf("%d %d",&a,&b);
               printf("%d\n",track[b]-track[a]+1);

         }

    }
    return 0;

}

