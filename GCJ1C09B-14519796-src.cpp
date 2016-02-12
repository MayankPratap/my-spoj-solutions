#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cctype>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){

    int c,i,j,n;
    bool check=0;
    double x,y,z,vx,vy,vz;
    double sumx,sumy,sumz,sumvx,sumvy,sumvz,num,den,t,temp,d;
    scanf("%d",&c);
    for(i=1;i<=c;++i){

         sumx=0,sumy=0,sumz=0,sumvx=0,sumvy=0,sumvz=0;
         scanf("%d",&n);
         for(j=0;j<n;++j){

              scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&z,&vx,&vy,&vz);
              sumx+=x;
              sumy+=y;
              sumz+=z;
              sumvx+=vx;
              sumvy+=vy;
              sumvz+=vz;             
         }
         sumx=sumx/n;
         sumy=sumy/n;
         sumz=sumz/n;
         sumvx=sumvx/n;
         sumvy=sumvy/n;
         sumvz=sumvz/n;
         num=sumx*sumvx+sumy*sumvy+sumz*sumvz;
         den=sumvx*sumvx+sumvy*sumvy+sumvz*sumvz;
         if(den<1e-09){

              t=0;
              d=sqrt(sumx*sumx+sumy*sumy+sumz*sumz);
             
         }
         else{

              t=-(num)/den;
              if(t<0){

                  t=0;
                  d=sqrt(sumx*sumx+sumy*sumy+sumz*sumz);
              }
              else{

                  d=sqrt(pow(sumx+(sumvx*t),2)+pow(sumy+(sumvy*t),2)+pow(sumz+(sumvz*t),2));
                   
              }
 
         }
         printf("Case #%d: %0.8lf %0.8lf\n",i,d,t);
    }
    return 0;
}