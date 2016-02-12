#include<stdio.h>
int bc(double n,int steps){

    if(n<=1) return steps;
     return bc(n/2,++steps);
}
int main(){

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        
        int steps=0;
        long long int minbarehands;
        double l,b,h;
        scanf("%lf %lf %lf",&l,&b,&h);  
        double x=l,y=b,z=h;
        minbarehands=(x*y*z)-1;
        steps=bc(x,steps);
        steps=bc(y,steps);
        steps=bc(z,steps);
        printf("Case #%d: %lld %d\n",i,minbarehands,steps);
    }
    
    return 0;
}

