#include<bits/stdc++.h>
using namespace std;
int LCS(char *s,char *t,int m,int n){

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

   
    while(1){ 
        char s[1005],t[1005];
        if(scanf("%s",s)!=1||scanf("%s",t)!=1) break;
        if(s[0]=='#') break;
        int m=strlen(s),n=strlen(t); 
        int len=LCS(s,t,m,n);        
        int cost=(m-len)*15+(n-len)*30;  
        printf("%d\n",cost); 

     }
     return 0;

}
