#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;


int p[1000009];
long long f[1000009];

void pre(){
    long long int i,j;
    for(i=1;i<=1000000;++i){
     
             for(j=i;j<=1000000;j+=i){
                   
                   p[j]+=i;
      
             }
  
           f[i]=f[i-1]+p[i]-i;            
   }
}

int main(){

    int t;
    pre();
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",f[n]);
        
    }
    return 0;
}
