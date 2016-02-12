#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<cmath>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         int h,a,count=1;
         scanf("%d %d",&h,&a);
         h+=3;
         a+=2;
         while(1){

            if(h>5&&a>10){

                 h=h-5;
                 a=a-10;
                 ++count;
                 h=h+3;
                 a=a+2;
                 ++count;
            }
            else if(h>20){    
               
                 h=h-20;
                 a=a+5;
                 ++count;
                 h=h+3;
                 a=a+2; 
                 ++count; 
             }
            
            else{
 
                 printf("%d\n",count);
                 break;

            }
         }
    }
     return 0;
}
