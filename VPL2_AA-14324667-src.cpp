#include<bits/stdc++.h>
int main(){
     int t,i;
     scanf("%d",&t);
     for(i=1;i<=t;++i){

         int po,pi,t,p;
         scanf("%d %d %d %d",&po,&pi,&t,&p);
         
         double x=(log10((double)pi/(double)po))/(double)t;  //log(k+1) ki value
          
         double y=(log10((double)p/(double)po))/x;   
 
         printf("Scenario #%d: %0.2lf\n",i,y);
    }
     return 0;
}
