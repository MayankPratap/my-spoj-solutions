#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int x,avg,n,sum,nsum,max;
        scanf("%d %d",&x,&avg); 
        n=avg+1-x;
        nsum=(avg+1)*(n-1);
        max=nsum-(((n-2)*(n-1))/2);
        printf("%d\n",max);

    }

    return 0;

}
