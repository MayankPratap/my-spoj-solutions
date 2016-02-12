#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

     int t;
     scanf("%d",&t);
     while(t--){ 

          string str1,str2;
          cin>>str1;
          str2=str1;
          str2=str1+str2;
          int len=str1.size(),pos=0,i;
          string prev=str2.substr(0,len);
          for(i=1;i<len;++i){
               
               string copy=str2.substr(i,len);
               if(strcmp(copy.c_str(),prev.c_str())<0){
                    pos=i;
                    prev=copy; 
               }                  
          }
           
          printf("%d\n",pos+1);

    }
    return 0;

}

