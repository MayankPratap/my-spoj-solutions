#include<bits/stdc++.h>
int p[10000009];
long long f[10000009];
void pre(){
    long long int i,j;
    for(i=2;i<=10000000;++i){
        
        if(p[i]==0){

             for(j=i+i;j<=10000000;j+=i){

                 if(p[j]==0)
                    p[j]=i;
                   
             }
              f[i]=f[i-1]+i;
       }
       else
           f[i]=f[i-1]+p[i];            
    }
}
int main(){

    int t;
    pre();
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",f[n]);
        
    }
    return 0;
}
