#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cctype>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int gcd(long long int a,int b){
     
     if(b==0)
          return a;
     return gcd(b,a%b);
}

int main(){
 
   
   while(1){
          
           char str[25];
           scanf("%s",str);
           if(str[0]=='*')  break;
           long long int i,len=strlen(str),yes[25],no[25],k=0,l=0,flag=0,lcm,hcf,prod;
           for(i=0;i<len;++i){

                   if(str[i]=='Y')
                        yes[k++]=i+1;
                   else
                        no[l++]=i+1;

           }
           
            if(k==1){
               lcm=yes[k-1];
            }
            else{

                 hcf=gcd(yes[1],yes[0]);
                 lcm=(yes[0]*yes[1])/hcf;
                 for(i=2;i<k;++i){

                      prod=lcm*yes[i];
                      hcf=gcd(lcm,yes[i]);
                      lcm=prod/hcf;
  
                 }
            }
            for(i=0;i<l;++i){

                if(lcm%no[i]==0){
                              
                            flag=1;
                            break;
               }

            }
             if(flag==0) printf("%lld\n",lcm);
             else printf("-1\n");
 
       
                   
   }
   return 0;
}
