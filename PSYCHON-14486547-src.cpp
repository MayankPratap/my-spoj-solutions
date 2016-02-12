#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,count=0,even=0,odd=0,i;
        scanf("%d",&n);
        if(n==0||n==1){
             printf("Ordinary Number\n");
          
        }
        else{
           int temp=n;
           for(i=2;i*i<=n;++i){ 
               if(n%i==0){      
                  while((n%i)==0){

                       n=n/i;    
                       ++count;
                  }
                  if((count&1)==0) ++even;
                  else ++odd;
                  count=0;
              } 
           }
          if(n>1) ++odd;
          if(even>odd) printf("Psycho Number\n");
          else printf("Ordinary Number\n");
       }
   }
   return 0;
}
