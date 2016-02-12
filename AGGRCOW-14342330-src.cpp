#include<bits/stdc++.h>
using namespace std;
long long int loci[100005];
int checkbarn(long long int x,int n,int c){

    int cowscount=1,i;
    long long lastloci=loci[0];
    for(i=1;i<n;++i){

        if(loci[i]-lastloci>=x){

            lastloci=loci[i];
            ++cowscount;
            if(cowscount==c) return 1;
        }
 
    }
     return 0;

} 
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,c,i;
        scanf("%d %d",&n,&c);
        for(i=0;i<n;++i){
            scanf("%lld",&loci[i]);
        }
        sort(loci,loci+n);      
        long long int start=0,end=loci[n-1]-loci[0]+1,mid;
        while(end-start>1){
            mid=(end+start)>>1;
            if(checkbarn(mid,n,c)) start=mid;
            else end=mid;

        }
        
            printf("%lld\n",start);
    }
    return 0;

}
