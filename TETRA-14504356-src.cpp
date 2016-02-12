#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;
double heron(double a,double b,double c){

    double s;
    s=(a+b+c)/2.0;

    return sqrt(s*(s-a)*(s-b)*(s-c));

}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         double u,v,w,W,V,U,vol,area=0;
         scanf("%lf %lf %lf %lf %lf %lf",&u,&v,&w,&W,&V,&U);
         area+=heron(u,v,W);
         area+=heron(V,W,U);
         area+=heron(w,v,U);
         area+=heron(u,w,V);
         
        vol=sqrt(4*u*u*v*v*w*w- u*u*(v*v+w*w - U*U)*(v*v+w*w-U*U) - v*v*(w*w+u*u - V*V)*(w*w+u*u-V*V) - w*w*(u*u + v*v - W*W)*(u*u+v*v-W*W) + (v*v +w*w - U*U)*(w*w+u*u- V*V)*(u*u+v*v - W*W))/12;
         printf("%0.4lf\n",vol*3.0/area);   
    }
    return 0;
}
