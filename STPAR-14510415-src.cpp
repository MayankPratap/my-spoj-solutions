#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#define SIZE 2000
using namespace std;

int stack[SIZE];
int top=-1;

void push(int n){

   stack[++top]=n;

}
int pop(){

   return stack[top--];
} 


int main(){

     while(1){

          int n,a,i,m,k=1,arr[2000],count=0;
          scanf("%d",&n);
          if(n==0) break;
          push(5000);
          for(i=1;i<=n;++i){

                scanf("%d",&m);
                if(m<stack[top])
                    push(m);
                else{

                     while(stack[top]!=5000&&stack[top]<m)
                          arr[k++]=pop();
                     push(m);                     
                }
          }
          while(stack[top]!=5000)
               arr[k++]=pop();
          for(i=1;i<=n;++i){

                if(arr[i]==i)
                   ++count;
          }
          if(count==n)
              printf("yes\n");
          else
              printf("no\n");
    }
    return 0;
}
