#include<bits/stdc++.h>
int dp[100][100];
int inv(int n,int k){

    if(n==0) return dp[n][k]=0;
     
    if(k==0) return dp[n][k]=1;

    if(dp[n][k]!=-1) return dp[n][k];
    
    int i,val=0;

    for(i=0;i<n&&k-i>=0;++i){

        val+=inv(n-1,k-i);

    }
    return dp[n][k]=val;
}
int main(){
   
   int i,j;
   for(i=0;i<=100;++i){
       for(j=0;j<=100;++j)
           dp[i][j]=-1;

   }

   int t;
   scanf("%d",&t);
   while(t--){
       int n,k;
       scanf("%d %d",&n,&k);
       printf("%d\n",inv(n,k));     
        
   } 
   return 0;

}
