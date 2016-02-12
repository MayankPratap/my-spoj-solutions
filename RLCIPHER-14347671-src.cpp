#include<bits/stdc++.h>
long long int num[100005];
int main(){


     int t;
     scanf("%d",&t);
     while(t--){

         int n,i;
         scanf("%d",&n);
          
         for(i=0;i<n;++i){

             scanf("%lld",&num[i]);
             if(num[i]<3){

                  if(num[i]>=0){

                      num[i]=num[i]-4;
                  }
                   
             }
             else{

                  if(num[i]==5)
                      num[i]=-3;
                  else
                      num[i]=-4;
             }
         }
         for(i=0;i<n;++i){
             if(i==n-1)
             printf("%lld",num[i]);
             else
             printf("%lld ",num[i]);

         }
          
         printf("\n");         
         
    }

     return 0;

}
