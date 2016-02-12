#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

#define sqr 1.7320508075688772935274463415059
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         double a,b,c;
         scanf("%lf%lf%lf",&a,&b,&c);
         double y=a*a+b*b+c*c;
         double x=a*a*b*b+a*a*c*c+b*b*c*c-a*a*a*a-b*b*b*b-c*c*c*c;
         double res=(y+sqrt(y*y+4*x))/2.0;
         double area=(sqr*res)/4.0;
         printf("%0.2lf\n",area);
    }
    return 0;
}
