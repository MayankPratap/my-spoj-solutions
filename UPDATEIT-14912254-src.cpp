#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    
    scanf("%d",&t);

    while(t--){

         int n,u,i,low,high,val,q,x;

         long long a[10005]={0},rupdate[10005]={0};  
         long long sum=0;

         scanf("%d %d",&n,&u);

         for(i=0;i<u;++i){

            scanf("%d%d%d",&low,&high,&val);
            rupdate[low]+=val;
            rupdate[high+1]-=val;
                        
         }

         for(i=0;i<n;++i){

            sum+=rupdate[i]; 
            a[i]=sum;

         }

         scanf("%d",&q);

         for(i=1;i<=q;++i){

            scanf("%d",&x);
            printf("%lld\n",a[x]);

         }

    }
    return 0;

}
