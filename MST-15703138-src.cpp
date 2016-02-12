//Solving MST problem using Kruskal Algorithm

//I have used both union by rank and path compression
 
#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
 
 
struct edge{
 
   long long a,b,w;
 
   friend bool operator<(edge a,edge b){
 
       return a.w<b.w;
   }
 
 
}E[MAX+1];
 
long long par[MAX+1]; //Parent of a node

int sizes[MAX+1];
 
int root(long long node){
 
    if(node==par[node]) //This is the root
        return node;
 
    return par[node]=root(par[node]);
 
 
}
 
int main(){
 
    int n,m;
 
         scanf("%d %d",&n,&m);    
   
         long long total=0;
 
         //Setting each node as its parent
         //Initially all components are singleton
 
         for(int i=1;i<=n;++i){
 
            par[i]=i;
            sizes[i]=1;

         }
 
         for(int i=0;i<m;++i){
 
            scanf("%lld %lld %lld",&E[i].a,&E[i].b,&E[i].w);
            
         }
 
         sort(E,E+m);  //Sorting the edges in ascending order
 
         for(int i=0;i<m;i++){
 
              int u=root(E[i].a); 
 
              int v=root(E[i].b);
 
              if(u!=v){
               
                  total+=E[i].w;                     
                  if(sizes[u]<sizes[v]){

                      par[u]=v;
                      sizes[v]+=sizes[u];
                  }
                  else{

                      par[v]=u;
                      sizes[u]+=sizes[v];

                  }
              }

         }
 
         printf("%lld\n",total);
 
   
 
    return 0;

}
 

