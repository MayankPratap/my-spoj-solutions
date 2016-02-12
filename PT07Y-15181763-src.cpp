#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adjList;
vector<bool> visited; 

void BFS(int start){

    visited[start]=1;
  
    queue<int> Q;

    Q.push(start);

    vector<int>::iterator itr;

    while(!Q.empty()){

         int newVertex=Q.front();
    
         itr=adjList[newVertex].begin();

         while(itr!=adjList[newVertex].end()){

              if(visited[*itr]==0){

                     visited[*itr]=1;               
     
                     Q.push(*itr);

              }            
 
              ++itr;

         }

          Q.pop();

      }

}
    

int main(){

    int n,m,i,u,v,v1;
    scanf("%d %d",&n,&m);

    adjList.resize(n+1);
 
    visited.resize(n+1,0);

 
    for(i=1;i<=m;++i){

         scanf("%d %d",&u,&v);

         v1=u;
 
         adjList[u].push_back(v);
         adjList[v].push_back(u);
  
    }  

    if(m!=n-1)
         printf("NO\n");

    else{


         BFS(v1);

         int flag=0;
           
         for(i=1;i<=n;++i){

                 if(visited[i]==0){
                     flag=1;

                     break;
                 }                                 

         }
         if(flag==1)
             printf("NO\n");

         else
             printf("YES\n");

    }
    return 0;

}
