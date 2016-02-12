#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long int w,b;
        scanf("%lld %lld",&w,&b);
        if((w&1)==0&&(b&1)==0)
            printf("0.000000\n");
        else if((w&1)==0&&(b&1)!=0)
            printf("1.000000\n");
        else if((w&1)!=0&&(b&1)!=0)
            printf("1.000000\n");
        else
            printf("0.000000\n");
    }
    return 0;

}
