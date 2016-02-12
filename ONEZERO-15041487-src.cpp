#include<bits/stdc++.h>
using namespace std;
int parent[20005];
int child[20005];

void breadthFirstSearch(int n){

     queue<int> q;
     int temp,temp1;

     temp=1%n;
     parent[temp]=0;
     q.push(temp); 

     while(!q.empty()){

           temp=q.front();
           q.pop(); 

           if(temp==0){

               stack<int> s;
               while(parent[temp]!=0){
                  
                    s.push(child[temp]);     
                    temp=parent[temp]; 
                    
               }
               s.push(1);

               while(!s.empty()){

                    printf("%d",s.top());
                    s.pop();
               }
               printf("\n");
               break;
         }
           temp1=(temp*10)%n;
    
           if(parent[temp1]==-1){
              q.push(temp1);
              parent[temp1]=temp;
              child[temp1]=0;
           }

             temp1=(temp*10+1)%n;
          
             if(parent[temp1]==-1){
                q.push(temp1);   
                parent[temp1]=temp;
                child[temp1]=1;
             }

     }

}


int main(){

    int t,n;

    scanf("%d",&t);

    while(t--){

                  
         scanf("%d",&n);
         for(int i=0;i<=20000;++i)
            parent[i]=-1;
         breadthFirstSearch(n);  
        
    }
   
    return 0;
}
