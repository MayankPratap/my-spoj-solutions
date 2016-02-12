#include<bits/stdc++.h>
using namespace std;
#define INF 1e6
int n,m;
int a[200][200],level[200][200];
char str[200];
void breadthFirstSearch(int i,int j){

    level[i][j]=0;
      
    queue<pair<int,int> >VertexQueue;
    VertexQueue.push(make_pair(i,j));

    while(!VertexQueue.empty()){

          pair<int,int> VertexPair=VertexQueue.front();
           
 
          int i=VertexPair.first,j=VertexPair.second;
          
          if(i+1<=n){

                 if(level[i][j]+1<level[i+1][j]){

                        
                        level[i+1][j]=level[i][j]+1;
 
                        VertexQueue.push(make_pair(i+1,j));  
                          
                  }
          } 
          if(i-1>=1){

 
                 if(level[i][j]+1<level[i-1][j]){

                        level[i-1][j]=level[i][j]+1;
                        VertexQueue.push(make_pair(i-1,j));    
                 }
                  
          }
          if(j+1<=m){

                  if(level[i][j]+1<level[i][j+1]){


                       level[i][j+1]=level[i][j]+1;
                       VertexQueue.push(make_pair(i,j+1));    

                  }
           
         }
         if(j-1>=1){

                 if(level[i][j]+1<level[i][j-1]){
  
                       level[i][j-1]=level[i][j]+1;
                       VertexQueue.push(make_pair(i,j-1));    

                 }
         }
         VertexQueue.pop();
 
    }



} 

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         int i,j;
         memset(level,INF,sizeof(level)); 
         scanf("%d %d",&n,&m);   
         for(i=1;i<=n;++i){

              scanf("%s",str);
              for(j=1;j<=m;++j){

                  a[i][j]=str[j-1]-'0';
                                     
              }
         }
         for(i=1;i<=n;++i){

             for(j=1;j<=m;++j){

                 if(a[i][j]==1){

                      breadthFirstSearch(i,j);

                 }
             }
         }
         for(i=1;i<=n;++i){

             for(j=1;j<=m;++j){

                   printf("%d ",level[i][j]);
             }

             printf("\n");
         }
    }
    return 0;
}
