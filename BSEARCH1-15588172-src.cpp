#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,q,i;

    long long a[100005];
 
    scanf("%d %d",&n,&q);

    for(int i=1;i<=n;++i){

        scanf("%lld",&a[i]);

    }

    a[0]=1000000002;

    long long val;

    while(q--){

       int low=1,high=n,mid;
        
       int flag=0;

       scanf("%lld",&val);

       while(low<=high){

          mid=(low+high)>>1;

          if(a[mid]==val){ 

               if(a[mid-1]==a[mid])
                   high=mid-1;

               else{
                   
                   printf("%d\n",mid-1);

                   flag=1;

                   break;
                     
               }
           }
           else if(a[mid]>val){

                high=mid-1;

           }
           else{


                low=mid+1;


           }
       }       

       if(flag==0){

            printf("-1\n");

       }

   }

   return 0;
}
