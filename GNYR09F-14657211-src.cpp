#include<bits/stdc++.h>
using namespace std;
int w[2][105][105];
void pre(){

   w[0][0][1]=1;
   w[1][0][1]=1;
   w[0][1][1]=0;
   w[1][1][1]=0;
   int k,n;
   for(n=2;n<=100;++n){

       for(k=0;k<=100;++k){

             if(k<n){
               w[0][k][n]=w[0][k][n-1]+w[1][k][n-1];       
               if(k>0) 
                 w[1][k][n]=w[1][k-1][n-1];
               w[1][k][n]+=w[0][k][n-1];   
             }
             else
               break;       

       }
   }

}
int main(){

    int t,i,n,k;
    scanf("%d",&t);
    pre();
    while(t--){
 
        scanf("%d%d%d",&i,&n,&k);
        printf("%d %d\n",i,w[0][k][n]+w[1][k][n]);             
          
    }
    return 0;

}
