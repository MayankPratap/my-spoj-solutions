#include<bits/stdc++.h>
using namespace std;
int boriya(int W,int *wt,int *val,int n){

     int i,w;
     int K[n+1][W+1];
     for(i=0;i<=n;++i)
           for(w=0;w<=W;++w)
                  if(i==0||w==0)
                      K[i][w]=0;
                  else if(wt[i-1]<=w)
                      K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
                 else
                      K[i][w]=K[i-1][w];
           
     return K[n][W];
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         int k,m,i,wt[60],val[60];
         scanf("%d %d",&k,&m);
         for(i=0;i<m;++i){

              scanf("%d %d",&wt[i],&val[i]);
         }
         printf("Hey stupid robber, you can get %d.\n",boriya(k,wt,val,m));
   } 
   return 0;

}
