#include<bits/stdc++.h>
long long int a[1000005];
int main(){

    int t;
    scanf("%d",&t);              
    while(t--){

         int n,i,flag=0;
         long long cur=1;
         scanf("%d",&n);
         for(i=0;i<n;++i){

             scanf("%lld",&a[i]);
             cur=cur-a[i];
             cur=cur<<1;
             if(cur<0)
                flag=1;
              
         }
          if(flag==0){

                if(cur)
                   printf("No\n");
                else
                   printf("Yes\n");
          }
          else{

                printf("No\n");
               

          }         

    }
    return 0;

}


