#include<algorithm>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<sstream>
#include<string>
#include<vector>

#define inf 1000000000

#define MAXN 500000

using namespace std;

long long a[MAXN+5];

set<long long> check;

void precalculate_ak(){

    for(int i=1;i<=MAXN;++i){

         if(a[i-1]-i>0&&check.find(a[i-1]-i)==check.end()) a[i]=a[i-1]-i;
         else a[i]=a[i-1]+i;
   
         check.insert(a[i]);

    }

}

int main(){

    precalculate_ak();
   
    while(1){

        int k;
        scanf("%d",&k);
        if(k==-1) break;

        printf("%lld\n",a[k]);

    }
    return 0;

}


