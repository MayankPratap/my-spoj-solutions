//Solving MST problem using Kruskal Algorithm

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

long long root(long long node){

    if(node==par[node]) //This is the root
        return node;

    return par[node]=root(par[node]);


}

int main(){

    int n,m;

    while(scanf("%d %d",&n,&m)){    
   
         long long total=0;

         //Setting each node as its parent
         //Initially all components are singleton

         for(int i=1;i<=n;++i) par[i]=i;

         for(int i=0;i<m;++i){

            scanf("%lld %lld %lld",&E[i].a,&E[i].b,&E[i].w);
            
         }

         sort(E,E+m);  //Sorting the edges in ascending order

         for(int i=0;i<m;i++){

              long long u=root(E[i].a); 

              long long v=root(E[i].b);
 
              if(u!=v){
               
                  total+=E[i].w;                     
                  par[u]=v; 
              }
         }

         printf("%lld\n",total);

    }

    return 0;

}
