#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
 
        double vol,S,a;
        scanf("%lf",&vol);
        a=pow(4*vol,0.3333333333333333333333333);
        S=3*a*a*sqrt(3)/2;
        printf("%0.10lf\n",S);
    }
    return 0;
}
