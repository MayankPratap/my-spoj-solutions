#include<bits/stdc++.h>
using namespace std;
int LCS(char *s,char *t,int m,int n){

     static int L[6101][6101],i,j;
  
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
    char s[6105],revs[6105];
    scanf("%d",&t);
    while(t--){

        int i,len;
        scanf("%s",s);
        len=strlen(s);
        for(i=0;i<len;++i){
            revs[len-1-i]=s[i];
        }
       
        revs[len]='\0';   
        printf("%d\n",len-LCS(s,revs,len,len));
   }
   return 0;
}
