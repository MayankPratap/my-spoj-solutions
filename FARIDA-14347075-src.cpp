#include<bits/stdc++.h>
using namespace std;
int n;
long long int arr[10005],dp[10005];
long long int marry(int k){

    if(k>=n) return 0;     
    if(k==n-1) return arr[k];
    if(dp[k]!=-1) 
        return dp[k];

     dp[k]=max(arr[k]+marry(k+2),marry(k+1));

     return dp[k];

}
int main(){

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){

        int j;
        scanf("%d",&n);
        for(j=0;j<n;++j)
            scanf("%lld",&arr[j]);
        memset(dp,-1,sizeof dp);
        printf("Case %d: %lld\n",i,marry(0));
    }

    return 0;

}
