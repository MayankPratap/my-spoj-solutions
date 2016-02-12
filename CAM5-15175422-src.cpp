#include<bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int> > adjList;

void BFS(int start){

       vector<int>::iterator itr;
       visited[start]=1;

       queue<int> Q;
   
       Q.push(start);
   
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

    int t; 
    scanf("%d",&t);

    while(t--){
 
        int n,e,i,j,v1,v2;
        scanf("%d",&n);
        scanf("%d",&e);

        adjList.resize(n);
        visited.resize(n,0);

        for(i=1;i<=e;i++){

             scanf("%d %d",&v1,&v2);
             adjList[v1].push_back(v2);
             adjList[v2].push_back(v1);

        }

        
       
        int ans=0;

        for(i=0;i<n;i++){

               if(visited[i]==0){


                     BFS(i);
                     ans++;

               }
                  
                          
        }

        printf("%d\n",ans);

        adjList.clear();
        visited.clear();

    }
    return 0;

}
