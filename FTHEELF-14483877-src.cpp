#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

#define g 9.8
using namespace std;

int main(){

    while(1){
  
        int v,h;
        scanf("%d %d",&v,&h);
        if(v==-1)
            break;
       
        printf("%0.6lf\n",v/g*sqrt(2*g*h+v*v));

    }
    return 0;

}
