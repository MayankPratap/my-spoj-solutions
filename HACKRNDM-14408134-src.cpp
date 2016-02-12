#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main(){


   long long int n,k,i,count=0,start,end,mid;
   scanf("%lld %lld",&n,&k); 
   for(i=0;i<n;++i)
       scanf("%lld",&a[i]);
   sort(a,a+n);
   for(i=0;i<n;++i){

        start=i+1,end=n-1;
        while(start<=end){

               mid=(start+end)/2;
               if(a[mid]-a[i]==k){
                   ++count;
                   break;
               }
               else if(a[mid]-a[i]>k){

                   end=mid-1;
               }
               else{

                  start=mid+1;
               }
      }
   }

    printf("%lld\n",count);


    return 0;

}
