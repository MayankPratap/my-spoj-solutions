#include<bits/stdc++.h>
int main(){

    while(1){     

          unsigned long long int n,i;
          int count;
          scanf("%llu",&n);
          if(n==0) break;
          for(i=2;i*i<=n;++i){

                count=0;
                while(n%i==0){

                     ++count;
                     n=n/i;               
                }
                if(count!=0)
                printf("%llu^%d ",i,count);                
         }
         if(n>1){

                     printf("%llu^%d",n,1);
                }   
         printf("\n");
         
    }
    return 0;
}
