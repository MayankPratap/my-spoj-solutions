#include<bits/stdc++.h>
using namespace std;
int visited[20005];

struct node{

    char str[2000]; 
    int mod;

};

void breadthFirstSearch(int n){

     queue<node> q;
     
     node temp,temp1,temp2;

     strcpy(temp.str,"1");
     temp.mod=1%n;
   
     visited[temp.mod]=1;

     q.push(temp); 

     while(!q.empty()){

           node temp=q.front();    
           if(temp.mod==0){


               printf("%s\n",temp.str);
               break;
           }

           visited[temp.mod]=1;
            
           q.pop();  

           strcpy(temp2.str,temp.str);
           strcat(temp.str,"0");
           strcpy(temp1.str,temp.str);

           temp1.mod=(temp.mod*10)%n;
     
           if(visited[temp1.mod]==0)
              q.push(temp1);

           strcat(temp2.str,"1");
           strcpy(temp1.str,temp2.str);

           temp1.mod=(temp.mod*10+1)%n;
         
           if(visited[temp1.mod]==0)
               q.push(temp1);   

     }

}


int main(){

    int t,n;

    scanf("%d",&t);

    while(t--){

                  
         scanf("%d",&n);
         for(int i=0;i<=20000;++i)
            visited[i]=0;
         breadthFirstSearch(n);  
        
    }
   
    return 0;
}
