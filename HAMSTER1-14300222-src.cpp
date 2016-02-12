#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338327950288
int main(){

   int t;
   scanf("%d",&t);
   while(t--){
       int v,k1,k2;
       long double theta,points;
       scanf("%d %d %d",&v,&k1,&k2);
       if(k2==0){

           theta=pi/4.0;
           points=k1*((v*v*sin(2*theta))/10.0);
       }
       else if(k1==0){

           theta=pi/2.0;
           points=k2*((v*v*sin(theta)*sin(theta))/20.0);
       }
       else{

           theta=-atan((4.0*(double)k1)/(double)k2);
           theta=theta+pi;
           theta=theta/2.0;
           points=k1*((v*v*sin(2*theta))/10.0)+k2*((v*v*sin(theta)*sin(theta))/20.0);
       }
       printf("%0.3Lf %0.3Lf\n",theta,points);
          
    }
    return 0;
}
