#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
#include<cstring>

using namespace std;

char stack[3005];

int top=-1;

void push(char ch){

    stack[++top]=ch;
}

char pop(){

    return stack[top--];

}

int main(){

     int t=0;
    
     while(1){
        
         ++t;
         int count=0,len,i;
         push('#');
         char str[3005],elem;
         scanf("%s",str);
         len=strlen(str);
         if(str[0]=='-') break;
         for(i=0;i<len;++i){

              if(str[i]=='{'){

                  push(str[i]);

              }
              else if(str[i]=='}'){

                   elem=pop();
                   if(elem!='{'){
                       ++count;
                       push('#');
                       push('{');
                   }
              }

         }
         int flag=0;
         while(1){
            elem=pop();
            if(elem=='#')
                break;
            else
               ++flag;
         }
   
          if(flag%2==0)
              flag/=2;
         
         count=count+flag;

         printf("%d. %d\n",t,count);
    }
    return 0;

}

