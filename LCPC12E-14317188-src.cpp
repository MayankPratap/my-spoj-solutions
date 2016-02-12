#include<bits/stdc++.h>
#define root2 1.414213562
using namespace std;
long double root(long double n)
{
    long double approx,better;
    approx=n/2.0;
    better=(approx+n/approx)/2.0;
    while(better!=approx)
   {
       approx=better;
       better=(approx+n/approx)/2.0;
   }
   return approx;

}
int main(){

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){

        long double x1,y1,x2,y2,r1,l;   
        scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&x1,&y1,&x2,&y2,&r1,&l);
        long double D=root((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        long double r2=l/root(2);
        if((r1+r2)<=D)
            printf("%d. No problem\n",i);
        else{
        
            long double x=root((r1+r2+D)*(r1+r2-D)*(r1-r2+D)*(-r1+r2+D));
            printf("%d. %0.3Lf\n",i,x/D);
        }
        printf("\n");
    } 
    return 0;

}
