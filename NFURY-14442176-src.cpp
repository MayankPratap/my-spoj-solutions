#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
static int store[10000],res;
int arr[1005],minimum=1000000;
int root(int n)
{
    double approx,better;
    approx=(double)n/2.0;
    better=(approx+(double)n/approx)/2.0;
    while(better!=approx)
   {
       approx=better;
       better=(approx+(double)n/approx)/2.0;
   }
   return approx;

}
using namespace std;

int nfury(int n,int minimum){
     
     int diff=n-(root(n)*root(n));
     if(diff==0)
           return 1;
     
     for(int i=1;i*i<=n;++i){

            diff=n-(i*i);
            if(store[diff]!=0) res=store[diff];
            else{
                 store[diff]=1+nfury(diff,minimum);
                 res=store[diff];
            }
            if(res<=minimum)
                  minimum=res;
     } 
       return minimum;                      
}
int main(){

 
     for(int k=1;k<1005;++k)
          arr[k]=nfury(k,minimum);        
     int t;
     scanf("%d",&t);    
    while(t--){
         int n;
         scanf("%d",&n); 
         printf("%d\n",arr[n]);
    }
    return 0;

}
