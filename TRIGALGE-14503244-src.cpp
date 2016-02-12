#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cctype>
#include<sstream>

#define eps 1e-9

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
 
         int a,b,c;
         scanf("%d %d %d",&a,&b,&c);
         double start=0,end=100005,mid,res;
         while(end-start>2*eps){

             mid=(start+end)/2;
             res=a*mid+b*sin(mid);
             if(res<c)
                 start=mid;
             else
                 end=mid;
                          
         }
         mid=(start+end)/2;
         printf("%0.6lf\n",mid);
    }
    return 0;
}
