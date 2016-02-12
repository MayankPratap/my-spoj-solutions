#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long num,unsigned long long den){

    if(den==0)
       return num;
      
    return gcd(den,num%den);
}
int main(){

     int t,i;
     scanf("%d",&t);
     for(i=1;i<=t;++i){

         unsigned long long x1,y1,x2,y2;
         scanf("%llu %llu %llu %llu",&x1,&y1,&x2,&y2);
         long long num,den;
         if(x1==0 && y1==0)
             printf("Case %d: 0\n",i);
         else{

            num=x1*(x2+1)+y1*(y2+1);
            den=(x1+y1)*(x2+y2+1);
       
            unsigned long long hcf=gcd(num,den);
            num=num/hcf;
            den=den/hcf;
            printf("Case %d: %llu/%llu\n",i,num,den);
         } 
     }
     return 0;

}
