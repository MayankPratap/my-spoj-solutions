#include<bits/stdc++.h>
int a[10005];
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,i;
        scanf("%d",&n);
        long long int s1=0,s2=0; 
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        for(i=0;i<n;++i){

            s1+=(n-i-1)*a[n-i-1];
            s2+=(n-i-1)*a[i];
        }
        printf("%lld\n",s1-s2);

    }

    return 0;

}
