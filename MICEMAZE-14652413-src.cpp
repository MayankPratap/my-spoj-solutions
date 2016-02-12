#include<iostream>
#include<cstdio>
#include<limits.h>
using namespace std;
#define INF INT_MAX
int main(){

    int n,e,t,m,graph[105][105],dist[105][105],i,j,k,a,b,c;
    
    scanf("%d",&n);
    scanf("%d",&e);
    scanf("%d",&t);
    scanf("%d",&m); 
    for(i=1;i<=n;++i){

        for(j=1;j<=n;++j){

             if(i!=j)
               dist[i][j]=INF;
             else if(i==j)
               dist[i][j]=0;
        }    
    }
    for(i=1;i<=m;++i){

         scanf("%d%d%d",&a,&b,&c);
         dist[a][b]=c;
    }
     
    for(k=1;k<=n;++k){

         for(i=1;i<=n;++i){
  
               for(j=1;j<=n;++j){
                    
                     if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][k]+dist[k][j]<dist[i][j])
           dist[i][j]=dist[i][k]+dist[k][j];


               }

         }
  
    }
    int count=0;
     for(i=1;i<=n;++i)
           if(dist[i][e]<=t)
               ++count;

     printf("%d\n",count);       
    return 0;
}
