#include<bits/stdc++.h>
int main(){


    int t,i;
    scanf("%d",&t);
  
    for(i=1;i<=t;++i){

        int ta,sp;
        double g=9.806,pi=2*acos(0.0);
        scanf("%d %d",&ta,&sp);
            
        double theta=asin((double)ta*g/((double)sp*(double)sp))/2.0;

        double degree=(theta*180)/pi;
       
        if(degree>=0.0&&degree<=45.0)
            printf("Scenario #%d: %0.2lf\n",i,degree);
        else
            printf("Scenario #%d: -1\n",i);
    }
    return 0;

}
