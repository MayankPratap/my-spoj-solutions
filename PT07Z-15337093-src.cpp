//Finding longest path in a tree using DFS

#include<bits/stdc++.h>
using namespace std;

int diameter=0;

int dfs_visit(queue<int> *adjList,int u,int *visited,int *parent){

     int p,res,longest=-1,slongest=-1;

     visited[u]=1;

     while(adjList[u].size()){

          p=adjList[u].front();       

          adjList[u].pop();
          
          if(visited[p]==0){

              parent[p]=u;
           
              res=dfs_visit(adjList,p,visited,parent); //r ecursive call
              if(res>=longest){

                    slongest=longest;
                    longest=res;                     
              }

              else if(res>=slongest){

                    slongest=res;

              }

         }

    }

       diameter=max(diameter,longest+slongest+2);
 
       return longest+1;
} 

void dfs(queue<int> *adjList,int *visited,int *parent,int n){

    for(int i=1;i<=n;++i){

         if(visited[i]==0){

              
              dfs_visit(adjList,i,visited,parent);


         }

    }

}

int main(){


     int i,j,a,n,u,v;

     cin>>n;

     queue<int> adjList[n+1];

     int visited[n+1],parent[n+1];

     memset(parent,0,sizeof(parent));
     memset(visited,0,sizeof(visited));

     int start;

     for(i=1;i<n;++i){

          scanf("%d %d",&u,&v);
          
          adjList[u].push(v);
          adjList[v].push(u);

          start=u;

     }

     dfs_visit(adjList,start,visited,parent);

     printf("%d\n",diameter); 

   /*  for(i=1;i<=n;++i){

           printf("Parent of %d is %d\n",i,parent[i]);

     }   */   
     return 0;

}
