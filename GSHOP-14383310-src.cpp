#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<cmath>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;

using namespace std;

const double pi=acos(-1.0);

int main(){
    int t;
    scanf("%d",&t); 
    while(t--){

        int n,k,arr[105],i;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;++i)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        int count=0;
        long long int sum=0;
        for(i=0;i<n;++i)
             if(arr[i]<0) ++count;
        if(count>=k){
             for(i=0;i<k;++i){
                 if(arr[i]<0)
                      arr[i]=-arr[i];
             }
             for(i=0;i<n;++i)
                  sum+=arr[i];               
        }
        else{

             for(i=0;i<count;++i){
                      arr[i]=-arr[i]; 
             }
             sort(arr,arr+n);
             if((k-count)%2==0)
                 sum+=arr[0];      
             else
                 sum+=-arr[0];
            for(i=1;i<n;++i)
                  sum+=arr[i];
        }
 
        printf("%lld\n",sum);
    }
    return 0;
}     











    
