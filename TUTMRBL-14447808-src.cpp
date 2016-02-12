#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>

int main(){

    int n,count=0,ndiv,copy;
    while(1){

         ndiv=1;
         scanf("%d",&n);
         if(n==0) break;
         int i;
         copy=n;
         printf("%d = ",n);
         for(i=2;i*i<=n;++i){
                 
             while(n%i==0){
 
                  ++count;
                  n=n/i;
                  if(i*i>n && n==1)
                     printf("%d",i);
                  else
                     printf("%d * ",i);
                         
             }
             ndiv*=count+1;
             count=0;
              
        }
        if(n>1){
             printf("%d",n);
             ndiv*=2;
        }
        int m=sqrt(n),res;
        if(n-(m*m)==0){
           
            res=(ndiv+1)/2;
        }
        else
            res=ndiv/2;
           
        printf("\n");
        printf("With %d marbles, %d different rectangles can be constructed.\n",copy,res);
    }
                           
    return 0;

}
