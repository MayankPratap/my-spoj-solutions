#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,t,f;
        scanf("%d %d %d %d",&n,&k,&t,&f);
        printf("%d\n",(n*(k-1)+(f-n)*k)/(k-1));
    }
    return 0;
}
