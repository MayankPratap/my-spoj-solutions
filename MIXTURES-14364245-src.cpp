#include<iostream>
#include<sstream>
#include<cstdio>
#include<climits>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<deque>
#include<bitset>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<vector>
#include<queue>
#include<iterator>
#include<assert.h>
using namespace std;
int m[100][100];
int csum(int *p,int a,int b){

    int i,sum=0;
    for(i=a;i<=b;++i)
        sum+=p[i];
    
    return sum%100;

}
int memmatrixchain(int *p,int i,int j){

    if(m[i][j]!=-1) return m[i][j];
    else if(i==j) return m[i][i]=0;
    else{
        m[i][j]=1000000;
        for(int k=i;k<j;++k){
            int cost=memmatrixchain(p,i,k)+memmatrixchain(p,k+1,j)+csum(p,i,k)*csum(p,k+1,j);
                
            if(cost<m[i][j]){
                 m[i][j]=cost;
            }
 
        } 
      return m[i][j];
    }  
    
}
int main(){
   
    int n;
    while(scanf("%d",&n)==1){
         
        memset(m,-1,sizeof m);
        int i,color[105]={0};
        for(i=0;i<n;++i)
            scanf("%d",&color[i]);
        int res=memmatrixchain(color,0,99);
        printf("%d\n",res);

    }
    return 0;
}
