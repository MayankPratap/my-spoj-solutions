#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

   int t;
   scanf("%d",&t);
   printf("\n");
   while(t--){
         
        
        double u,v,w,W,V,U;
        scanf("%lf %lf %lf %lf %lf %lf",&u,&v,&w,&W,&V,&U);
        double ud=v*v+w*w-U*U;
        double vd=w*w+u*u-V*V;
        double wd=u*u+v*v-W*W;
        double volume=4*u*u*v*v*w*w-u*u*ud*ud-v*v*vd*vd-w*w*wd*wd+ud*vd*wd;
        volume=sqrt(volume);
        volume=volume/12;
        printf("%0.4lf\n",volume);

    }
    return 0;
}
