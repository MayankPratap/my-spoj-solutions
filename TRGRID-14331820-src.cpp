#include<bits/stdc++.h>
int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       long long int n,m;
       scanf("%lld %lld",&n,&m);
       if(n%2==1){

           if(m<n){

               if((n-m)%2==1)
                   printf("U\n");
               else
                   printf("D\n");

           }
           else
               printf("R\n");

       }
       else{

           if(m<n){
 
               if((n-m)%2==1)
                   printf("D\n");
               else
                   printf("U\n");
           }

           else
               printf("L\n");
       }

   }

    return 0;
}
