#include<bits/stdc++.h>
long long int store[500005];
int count[10000000]={0};
int main(){

     int i;
     long long int res;
     store[0]=0;
     count[0]=1;
     for(i=1;i<500005;++i){

          res=store[i-1]-i;
          if(res>0&&count[res]==0){
               store[i]=res;
               count[res]=1;
          }
          else{

               store[i]=store[i-1]+i;
               count[store[i]]=1;
          }
    }
     
     while(1){
          
         long long int k;
         scanf("%lld",&k);
         if(k==-1) break;
         
         printf("%lld\n",store[k]);
         
    }
    return 0;

}       
