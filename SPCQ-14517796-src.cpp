#include<bits/stdc++.h>
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        long long int n,i,j;
        scanf("%lld",&n);
            
             int sum=0;
             for(i=n;;++i){
                
                 if(i==n||i%10==0){
                     j=i;
                     sum=0;
                    while(j){
                      
                      sum+=j%10;
                      j=j/10;
                    }
                 }
                 else
                    sum=sum+1;
                 
                 if(i%sum==0){
                     printf("%lld\n",i);
                     break;
                }
            }
     
  

    }

    return 0;

}
