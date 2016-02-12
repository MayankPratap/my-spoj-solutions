#include<bits/stdc++.h>
using namespace std;
int main(){

    while(1){

         int n,i,a[2005],j,start,end,mid,count=0,pos;
         long long int sum=0;
         scanf("%d",&n);
         if(n==0) break;
         for(i=0;i<n;++i){
              scanf("%d",&a[i]);
         }
         sort(a,a+n);
         for(i=0;i<n-2;++i){

             for(j=i+1;j<n-1;++j){

                  sum=a[i]+a[j];    
                  start=j+1;
                  end=n-1;
                  while(start<end){

                       mid=(start+end)/2;
                       if(a[mid]<=sum)
                               start=mid+1;
                       else if(a[mid]>sum){
                            
                              if(a[mid-1]<=sum){

                                  start=mid;
                                  break;
                              }
                              else{
                               
                                  end=mid;
                              }
                       }                      
                  }
                  if(a[start]>sum) count+=n-start;               
             }
         }
         printf("%d\n",count);        
    }
    return 0;

}
