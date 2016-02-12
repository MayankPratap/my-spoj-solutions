#include<bits/stdc++.h>
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

         long long int n;
         scanf("%llu",&n);
         if((n&n-1)==0) printf("%lld 0\n",n);
         else{

             long long int mult=1,sum=0,m;
             int i=2,count=0;
             while(mult<n){
                  mult*=i;
             }
             m=mult;
             while(m/2){
                  ++count;
                  if(sum+m/2<n){

                      sum=sum+m/2;
                      m=m/2;
                  }
                  else if(sum+m/2==n){

                      sum=sum+m/2;
                      m=m/2;
                      break;
                  }
                  else{
                      m=m/2;                      
                  }

             }
             printf("%lld %d\n",mult,count);
         }
            
    }
   return 0;
}
