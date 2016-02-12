#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long n,res;
        scanf("%lld",&n);
        long double m;
        m=n;
        if((n&1)==0){

           res=roundl((m*m)/48.0); 

        }
        else{
            res=roundl((m+3)*(m+3)/48.0);
           
        }        
        printf("%lld\n",res);
    }

}
