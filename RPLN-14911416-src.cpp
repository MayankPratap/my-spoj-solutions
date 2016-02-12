#include<bits/stdc++.h>
using namespace std;

#define max INT_MAX


long long seg[400011],a[400011];

long long construct(int node,int start,int end){

    if(start==end){
        seg[node]=a[start];
        return seg[node];
    }
    int mid=(start+end)>>1;

    int left=construct(node*2,start,mid);

    int right=construct(node*2+1,mid+1,end);

    seg[node]=min(left,right);
   
    return seg[node];
   
}

long long range_min(int node,int start,int end,int left,int right){


    if(start>right||end<left)
        return max;

    if(start>=left && end<=right)
         return seg[node];

   int mid=(start+end)>>1;

    return min(range_min(node*2,start,mid,left,right),range_min(node*2+1,mid+1,end,left,right));



}

int main(){

    int t,j;
    scanf("%d",&t);
    
    for(j=1;j<=t;++j){

        int n,q,i,left,right;
        scanf("%d%d",&n,&q);

        for(i=1;i<=n;++i)
           scanf("%lld",&a[i]);

        long long val=construct(1,1,n);

       
       printf("Scenario #%d:\n",j);

        for(i=0;i<q;++i){
 
             scanf("%d %d",&left,&right);
             
             printf("%lld\n",range_min(1,1,n,left,right));         
             
             
        }


    }
    return 0;
}
