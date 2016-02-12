#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adjList;
vector<bool> visited;
vector<int> mark;

int flag;

void BFS(int start){

    visited[start]=1;

    mark[start]=1;
    
    queue<int> Q;

    Q.push(start);

    vector<int>::iterator itr;

    while(!Q.empty()){

         int newVertex=Q.front();
    
         itr=adjList[newVertex].begin();

         while(itr!=adjList[newVertex].end()){

              if(mark[*itr]==-1){

                    if(mark[newVertex]==1)
                         mark[*itr]=0;

                    else
                         mark[*itr]=1;

                    visited[*itr]=1;
                    Q.push(*itr);

              }
              
              else{

                    if(mark[*itr]==mark[newVertex])
                         flag=1;
                  
              }

             

              ++itr;

         }

          Q.pop();

    }


}

int main(){


     int t,j;
     scanf("%d",&t);
     for(j=1;j<=t;++j){

          int v,e,i,v1,v2;   //v is no.of vertices(bugs)
                     //e is no. of edges(interactions)

          flag=0;


          scanf("%d %d",&v,&e);

          adjList.resize(v+1);
          visited.resize(v+1,0);
          mark.resize(v+1,-1);

          for(i=1;i<=e;++i){             

               scanf("%d %d",&v1,&v2);
               adjList[v1].push_back(v2);
               adjList[v2].push_back(v1);
               
          }

          for(i=1;i<=v;++i){          
    
               if(!visited[i])
                   BFS(i);

               if(flag==1)
                   break;

          }

          printf("Scenario #%d:\n",j);
                

          if(flag==0)
            printf("No suspicious bugs found!\n");
          else
            printf("Suspicious bugs found!\n");

          adjList.clear();
          mark.clear();
          visited.clear();


     }
     return 0;

}
