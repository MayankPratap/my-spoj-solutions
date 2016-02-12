#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<sstream>
#include<vector>
#include<algorithm>
#define MAX 100005
#define mod 1000000007
using namespace std;

long long modex(long long base,long long expo){

    if(expo==0)
        return 1;
    long long f=modex(base,expo/2);
    
    if((expo&1)==0)
       return (f*f)%mod;
   return ((f*f)%mod*base%mod)%mod;

}

int main(){

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){

        int n;  
        scanf("%d",&n);
        if(n==1)
           printf("Case %d: 1\n",i);
        else{

            --n;
            long long res=modex(2,n-1);
             res=res%mod*(n+2)%mod;
            printf("Case %d: %lld\n",i,res);

        }
        
    }
    return 0;
}
