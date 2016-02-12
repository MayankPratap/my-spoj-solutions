#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<cmath>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long int h;
        scanf("%lld",&h);
        unsigned long long int res;
        res=(h*(h+1))/6;         
        printf("%llu\n",res);

    }
    return 0;

}
