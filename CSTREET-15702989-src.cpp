//Solving CSTREET Problem using Kruskal Algorithm

#include<bits/stdc++.h>
using namespace std;

#define MAX 300000

struct edge{
 
   int a,b;
   long long w;
 
   friend bool operator<(edge a,edge b){
 
       return a.w<b.w;
   }
 
 
}E[MAX+1];
 

int par[MAX+1]; //Parent of a node

int root(int node){

   if(node==par[node])  //This is the root
      return node;

  return par[node]=root(par[node]); //Path Compression

}

int main(){

   int t;

   scanf("%d",&t);

   while(t--){

      int p,n,m;

      long long total=0;   
 
      scanf("%d",&p);

      scanf("%d",&n);

      scanf("%d",&m);

      for(int i=1;i<=n;++i)
        par[i]=i;

      for(int i=0;i<m;++i){

           scanf("%d %d %lld",&E[i].a,&E[i].b,&E[i].w);
          

      }

      sort(E,E+m); //Sorting edges in ascending order

    

      for(int i=0;i<m;++i){

          int u=root(E[i].a);

          int v=root(E[i].b);

        
 
          if(u!=v){

               total+=E[i].w;
               par[u]=v;

             

          }

      }

      printf("%lld\n",total*p);

   }  
   return 0;
}
