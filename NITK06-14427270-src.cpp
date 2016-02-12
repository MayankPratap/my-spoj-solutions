#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,count=0,j;
        scanf("%d",&n);
        long long int a[10005],sum;
        for(i=0;i<n;++i) 
            scanf("%lld",&a[i]);
        bool check=true;
        for(i=0;i<n-1;++i){
          
               if(a[i]>a[i+1]){
                     
                     a[i]-=a[i+1];
                     a[i+1]=0;

               }
               else if(a[i+1]>=a[i]){

                    a[i+1]-=a[i];
                    a[i]=0;
               }
               
        }
        for(i=0;i<n;++i){

             if(a[i]==0) ++count;
         
        }
        if(count==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}
