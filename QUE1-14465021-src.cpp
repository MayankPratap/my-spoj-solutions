#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<vector>
#include<cstdlib>
#include<climits>

using namespace std;

#define mp make_pair
#define pb push_back
#define MAX 1000000005

typedef long long int ll;

int ans[1005];

int main(){

    int t;
    vector< pair<int,int> > arr;
    scanf("%d",&t);
    while(t--){

          int n,i,tallcount=0,j;
          scanf("%d",&n);
          memset(ans,0,sizeof ans);
          arr.resize(n);
          for(i=0;i<n;++i)
              scanf("%d",&arr[i].first);
          for(i=0;i<n;++i)
              scanf("%d",&arr[i].second);
          sort(arr.begin(),arr.end());
          for(i=0;i<n;++i){         
              
               tallcount=arr[i].second;
                                     
               for(j=0;j<n;++j){
 
                     if(tallcount==0&&ans[j]==0){

                           ans[j]=arr[i].first;
                           break;
                     }
                     if(ans[j]==0)
                          --tallcount;
               }
          }
          for(i=0;i<n;++i)
              printf("%d ",ans[i]);
          printf("\n");
    }
    return 0;
}
