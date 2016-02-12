#include<bits/stdc++.h>
using namespace std;

int dp[2][5100];

int main(){
  
    int n,i,j;
    scanf("%d",&n);
 
    char str[5100],revstr[5100];
    scanf("%s",str);

     for(i=n-1;i>=0;--i){
  
         revstr[n-1-i]=str[i];
     }
      
     revstr[n]='\0';  

     for(i=0;i<2;++i){

          for(j=0;j<=n;++j){
               dp[i][j]=0;

          }

     }

     for(i=0;i<=n;++i){

          for(j=0;j<=n;++j){

               if(i==0 || j==0)
                   dp[i%2][j]=0;

               else if(str[i-1]==revstr[j-1])
                   dp[i%2][j]=dp[(i-1)%2][j-1]+1;

               else
                   dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);

          }

     }
 
   

     printf("%d\n",n-dp[n%2][n]);
    return 0;
}
