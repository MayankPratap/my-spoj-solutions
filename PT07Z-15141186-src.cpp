#include<bits/stdc++.h>
using namespace std;

void BFS(vector<list<int> >adjacencyList,int parent[],int level[],int start){

     list<int>::iterator itr;
     level[start]=0;
     queue<int> Q;
    
     Q.push(start);

     while(!Q.empty()){

          int newVertex=Q.front();
     
          itr=adjacencyList[newVertex].begin();

          while(itr!=adjacencyList[newVertex].end()){
            if(level[*itr]==-1){

                  level[*itr]=level[newVertex]+1;
                  parent[*itr]=newVertex;
                  Q.push(*itr);
            }
           
            ++itr;        

       }
       Q.pop();

     }


}

int main(){


     int n,i,v1,v2;
     scanf("%d",&n);

     vector< list<int> >adjacencyList(n+1);
     
     for(i=1;i<n;++i){

          scanf("%d %d",&v1,&v2);
    
          adjacencyList[v1].push_back(v2);              

          adjacencyList[v2].push_back(v1);
     }

     int parent[n+1];
     int level[n+1];
     
     for(i=0;i<=n;++i){

            parent[i]=0;
            level[i]=-1;
     }
 
     v1=1;

     BFS(adjacencyList,parent,level,v1);
     int max=0;

     for(i=1;i<=n;++i){

           if(level[i]>max){
 
                 max=level[i];
                 v1=i;
           } 

     }  

     for(i=0;i<=n;++i){

            parent[i]=0;
            level[i]=-1;
     }

     BFS(adjacencyList,parent,level,v1);

      for(i=1;i<=n;++i){

           if(level[i]>max){
 
                 max=level[i];
                 v1=i;
           } 

     }

     printf("%d\n",max);  

     return 0;

}
