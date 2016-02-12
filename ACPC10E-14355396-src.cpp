#include<bits/stdc++.h>
long long int power(long long int base,long long int expo)
{
    if(expo==0)
    return 1;
    if(expo%2==0)
    return power(base*base,expo/2);
    return base*power(base,expo-1);
}
int main(){


    long long int g,t,a,d;
    while(1){

        scanf("%lld %lld %lld %lld",&g,&t,&a,&d);
        if(g==-1 && t==-1 && a==-1 && d==-1) break;
      
        long long int ntk=g*a+d,mgs;
        long long int copyntk=ntk;
        if(t%2==0)      
            mgs=(t/2)*(t-1)*g;
        else
            mgs=((t-1)/2)*t*g;
        if((ntk&(ntk-1))!=0){
                int count=0;
                while(ntk){
                 
                    ntk=ntk/2;
                    ++count;
                }
                ntk=1;
                while(count){
                    ntk*=2;
                    --count;
                }
                long long int nta=ntk-copyntk;
                while(ntk!=1){
                  
                    mgs+=ntk/2;
                    ntk=ntk/2;
                }
                printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,mgs,nta);
                 
        }
        else{

            while(ntk!=1){

                mgs+=ntk/2;
                ntk=ntk/2;
            }
            printf("%lld*%lld/%lld+%lld=%lld+0\n",g,a,t,d,mgs);

        }         
    }

    return 0;

}
