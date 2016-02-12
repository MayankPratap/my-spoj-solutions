#include<cstdio>
#include<vector>
#include<list>
#include<utility>

using namespace std;

int main(){

    int f,s,g,u,d;
    
    scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);
    int vertices=f,edges;   

    vector< list<int> > adjacencyList(vertices + 1);
 
    int parent[vertices + 1];
    
    int level[vertices + 1];
    for (int i = 0; i <= vertices; ++i) {
       
        parent[i] = 0;
        level[i] = -1;
    }
 
    level[s]=0;

    list<int> VertexQueue;

    VertexQueue.push_back(s);

    while(!VertexQueue.empty()){

        int newVertex=VertexQueue.front();
         
        if(newVertex+u<=f && level[newVertex+u]==-1) {
            
          level[newVertex+u]=level[newVertex]+1;
          VertexQueue.push_back(newVertex+u);          
 
     }
       if(newVertex-d>=1 && level[newVertex-d]==-1){

          level[newVertex-d]=level[newVertex]+1;
          VertexQueue.push_back(newVertex-d);

        }   

        VertexQueue.pop_front(); 
    }

    

    if(level[g]==-1){

       printf("use the stairs\n"); 
    }
    else{

       printf("%d\n",level[g]-level[s]);

    }
    return 0;
}
