#include<bits/stdc++.h>
using namespace std;
int josephus(int n,int d){

     int a=1,i;
     for(i=1;i<=n;++i){
         a=(a+d-1)%i+1;
     }
     
     return a;
}
int main(){

    while(1){

        int n,d;
        scanf("%d %d",&n,&d);
        if(n==0&&d==0) break;
        printf("%d %d %d\n",n,d,josephus(n,d));
        
    }
    return 0;
}
