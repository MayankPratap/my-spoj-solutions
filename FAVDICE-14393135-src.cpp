#include<bits/stdc++.h>
int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       int n,i;
       scanf("%d",&n);
       double res=0;
       for(i=1;i<=n;++i){

           res+=(double)1/(double)i;
        
       }
        printf("%0.2lf\n",res*n);

   }
   return 0;

}
