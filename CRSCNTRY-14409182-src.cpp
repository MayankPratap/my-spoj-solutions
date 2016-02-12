#include<bits/stdc++.h>
using namespace std;
int LCS(int *s,int *t,int m,int n){

     int L[m+1][n+1],i,j;
  
     for(i=0;i<=m;++i){

         for(j=0;j<=n;++j){

             if(i==0||j==0)
                 L[i][j]=0;

             else if(s[i-1]==t[j-1]) L[i][j]=L[i-1][j-1]+1;

             else L[i][j]=max(L[i-1][j],L[i][j-1]);

         }
     }
     return L[m][n];
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){ 

         int girl[2005],boy[2005],i,temp,tag=0,max=0;      
         for(i=0;;++i){
               
               scanf("%d",&temp);
               if(temp==0) break;
               girl[i]=temp;
         }
         int sizeg=i;
         while(1){
             int j,tmp;
             for(j=0;;++j){

                 scanf("%d",&tmp);
                 if(j==0&&tmp==0){
                        
                        tag=-1;
                        break;
                 }
                 else if(tmp==0) break;
                 else
                     boy[j]=tmp;
             }
             if(tag==-1){
                  break;
             }
             int sizeb=j;
             int res=LCS(girl,boy,sizeg,sizeb);
             if(res>max)
                 max=res;                           
         }
         printf("%d\n",max);       
    }
    return 0;

}
