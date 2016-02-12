#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       printf("\n");
       char ch,dh='#';
       int i,flag=1;
       long long cur=0,prev;
       
       
       while(1){

             scanf("%c",&ch);
             if(isdigit(ch)){

                   cur*=10;
                   cur+=(int)ch-48;

             }
             else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='=') {

                  
                   if(flag==1){
 
                       prev=cur;
                       cur=0;
                       flag=0;

                   }
                   else{

                       if(dh=='+')
                           prev+=cur;
                       else if(dh=='-')
                           prev-=cur;
                       else if(dh=='*')
                           prev*=cur;
                       else if(dh=='/')
                           prev/=cur;

                       cur=0;

                   }
                    dh=ch;
                    if(ch=='=')
                      break;

 
             }
 


       }
           printf("%lld\n",prev);

    }
    return 0;
}
