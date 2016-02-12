#include<bits/stdc++.h>
using namespace std;
int main(){


   while(1){
       int n,i;
       scanf("%d",&n);
       if(n==0) break;
       long long int c[100000],p[100000]; 
       for(i=0;i<n;++i){
            scanf("%lld",&c[i]);       
       }
       for(i=0;i<n;++i){
 
            scanf("%lld",&p[i]);
       }
       sort(c,c+n);
       sort(p,p+n);
       long long int sum=0;
       for(i=0;i<n;++i){

            sum+=c[i]*p[n-i-1];
       }
       printf("%lld\n",sum);

   }

    return 0;
}
