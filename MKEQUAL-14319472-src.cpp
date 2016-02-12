#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,a[100005],i;
        long long int sum=0;
        scanf("%d",&n);
        for(i=0;i<n;++i){
          scanf("%d",&a[i]);
          sum+=a[i];
        }

        if(sum%n==0) printf("%d\n",n);
        else printf("%d\n",n-1);
   }

    return 0;
}
