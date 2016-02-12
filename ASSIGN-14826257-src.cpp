#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX_N=20;

int n,t;

ll dp[1<<MAX_N];

int a[MAX_N][MAX_N];

int main(){

    ios::sync_with_stdio(0);  
    cin>>t;
    while(t--){
         
          cin>>n;
          int i,j,k,temp;
          for(i=0;i<n;++i){

               for(j=0;j<n;++j){

                    cin>>a[i][j];                

               }

          }
          dp[0]=1;   

          for(i=1;i<(1<<n);i++){

                j=0;
                dp[i]=0;
                for(k=0;k<n;++k){

                     temp=(i&(1<<k));
                     if(temp!=0)
                         j+=1;
                }
                for(k=0;k<n;++k){

                    if(a[j-1][k]==0) continue; // if k is not a subject j-1 likes ,then continue
                    temp=(i&(1<<k));
                    if(temp==0) continue; //if k is not in the set i,then continue;
                    
                    dp[i]+=dp[i & ~(1<<k)]; // i & ~(1<<k) represents the set i without k
               
                }
          }
          cout<<dp[(1<<n)-1]<<'\n';
    }
    return 0;
}