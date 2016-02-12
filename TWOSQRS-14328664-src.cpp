#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long int n;
        scanf("%lld",&n);
        long long int count=0,i,sum=0;
        bool tag=true;
        for(i=2;i*i<=n;++i){

            while(n%i==0){
 
                n=n/i;
                ++count;    
            }
            if(i%4==3&&count%2==1){
                 
                  tag=false;
                  break;
            } 
           count=0;
        }
        if(n%4==3) tag=false;
        
        if(tag==true) printf("Yes\n");
        else printf("No\n");
                 
    }
    return 0;
}
