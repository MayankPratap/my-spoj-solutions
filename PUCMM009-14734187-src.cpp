#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){

     if(a==0)
        return b;
      
     return (b%a,a);

}
int main(){

    int i,j,k,l,m,count=0,flag=0,num,hcf;
    for(i=0;i<10;++i){

         for(j=0;j<10;++j){

              if(i==j) continue;
             
              for(k=0;k<10;++k){
 
                   if(j==k||i==k)  continue;      
                   
                   for(l=0;l<10;++l){
 
                   
                         if(k==l||j==l||i==l)  continue;

                               for(m=0;m<10;++m){

                                      if(m==l||m==k||m==j||m==i) continue;
                                      num=m+l*10+k*100+j*1000+i*10000;
                                      if(num%495==0)
                                          ++count;
                                      ++flag;
                               }
                  }
             }

      }
   }
   
    hcf=gcd(count,flag);
    printf("%d/%d\n",count/hcf,flag/hcf);
     return 0;
}
