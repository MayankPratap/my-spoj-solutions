#include<bits/stdc++.h>
int main(){

   int t,count=0;
   scanf("%d",&t);
   while(t--){
       ++count;
       long long int n;
       double m;
       scanf("%lld",&n);
       m=sqrt(1+n)-1;
       printf("Case %d: %0.0lf\n",count,floor(m));
       
   }
   return 0;

}
