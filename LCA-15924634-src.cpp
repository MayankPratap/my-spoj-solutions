#include<bits/stdc++.h>
using namespace std;

 int parent[1005],visited[1005];

 int lca(int a,int b){

     visited[a]=1;

     while(parent[a]!=a){

          a=parent[a];
          visited[a]=1;     
     }

     visited[a]=1;  //Mark root as visited

 
     while(visited[b]!=1){

         b=parent[b];
            
     }

     //We have found our first visited root

     return b;
 }

int main(){
	
    int t;

    scanf("%d",&t);

    for(int k=1;k<=t;++k){

        int n,m,x;
 
        scanf("%d",&n);

        for(int i=1;i<=n;++i)
        	parent[i]=i;
       

        for(int i=1;i<=n;++i){

            scanf("%d",&m);

            for(int j=1;j<=m;++j){

               scanf("%d",&x);

               parent[x]=i;

            }
        }

        int q,a,b;

        scanf("%d",&q);

        printf("Case %d:\n",k);

        for(int i=1;i<=q;++i){

            scanf("%d %d",&a,&b);
            memset(visited,0,sizeof(visited));

            printf("%d\n",lca(a,b));
            
        }

    }

	return 0;
}