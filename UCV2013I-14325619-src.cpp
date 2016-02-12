#include<bits/stdc++.h>
int main(){

   double r,n;
    while(1){
    
        scanf("%lf %lf",&r,&n);
        if(r==0&&n==0) break;
        
        double pi=acos(-1);
        double theta=((2*n-2)*pi)/(4*n);
        double R=r/cos(theta);
        
        printf("%0.2lf\n",R);

   }
    return 0;

}
