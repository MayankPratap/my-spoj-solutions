#include<bits/stdc++.h>
using namespace std;

int level[70][70];

void BFS(int x,int y){

    queue< pair<int,int> >Q;

    Q.push(make_pair(x,y));

    level[x][y]=0;

    while(!Q.empty()){

         
           pair<int,int> qpair=Q.front();

           x=qpair.first;
           y=qpair.second;

           if(x+1<=8 && y+2<=8 && level[x+1][y+2]==-1){ 
               Q.push(make_pair(x+1,y+2));
               
               level[x+1][y+2]=level[x][y]+1;

           }
           if(x+2<=8 && y+1<=8 && level[x+2][y+1]==-1){
               Q.push(make_pair(x+2,y+1));

               level[x+2][y+1]=level[x][y]+1;

           }
           if(x+1<=8 && y-2>=1 && level[x+1][y-2]==-1){
               Q.push(make_pair(x+1,y-2));
                
               level[x+1][y-2]=level[x][y]+1;

           }
           if(x+2<=8 && y-1>=1 && level[x+2][y-1]==-1){
               Q.push(make_pair(x+2,y-1));
 
               level[x+2][y-1]=level[x][y]+1;

           }
           if(x-1>=1 && y+2<=8 && level[x-1][y+2]==-1){
               Q.push(make_pair(x-1,y+2));

               level[x-1][y+2]=level[x][y]+1;

           }
           if(x-2>=1 && y+1<=8 && level[x-2][y+1]==-1){
               Q.push(make_pair(x-2,y+1));

               level[x-2][y+1]=level[x][y]+1;

           }
           if(x-1>=1 && y-2>=1 && level[x-1][y-2]==-1){
               Q.push(make_pair(x-1,y-2));
 
               level[x-1][y-2]=level[x][y]+1;
 
           }
           
           if(x-2>=1 && y-1>=1 && level[x-2][y-1]==-1){
               Q.push(make_pair(x-2,y-1));
           
               level[x-2][y-1]=level[x][y]+1;
           }  
 
           Q.pop(); 

      }
}
int main(){

    int t,i,x,y,j;
    scanf("%d",&t);

    while(t--){

         char s1[4],s2[4];

         scanf("%s %s",s1,s2);

         int i,x1,y1,x2,y2,j;

         x1=s1[0]-'a'+1;
         y1=s1[1]-'0';

         x2=s2[0]-'a'+1;
         y2=s2[1]-'0';

       
 
         for(i=0;i<70;++i){

             for(j=0;j<70;++j){


                level[i][j]=-1;


             }
         } 

         BFS(x1,y1);

         printf("%d\n",abs(level[x1][y1]-level[x2][y2]));



    }

     return 0;

}
