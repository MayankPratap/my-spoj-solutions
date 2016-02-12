
#include<stdio.h>
#include<string.h>
int T[2005][3005];
int min(int a, int b, int c)
{
  if(a<b){
    return (a<c)?a:c;
  } else{
    return (b<c)?b:c;
  }
}
int editDistance (char* s1, int m, char* s2, int n)
{
  int i,j;
  for (i=0;i<=m;i++)
  {
    for(j=0;j<=n;j++)
    {
       if(i==0) {
         T[i][j] = j;
       }else if(j==0) {
         T[i][j] = i;
       }else {
         if(s1[i-1] == s2[j-1] ) {
           T[i][j] = min(1+T[i-1][j],1+T[i][j-1],T[i-1][j-1]);
         }else{
           T[i][j] = min(1+T[i-1][j],1+T[i][j-1],1+T[i-1][j-1]);
         }

       }
    }
  }

    return T[m][n];
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
      char s1[2005],s2[2005];
      scanf("%s",s1);
      scanf("%s",s2);
     int editDist=editDistance(s1,strlen(s1),s2,strlen(s2));
      printf("%d\n",editDist);
    }
    return 0;
}
