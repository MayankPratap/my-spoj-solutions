#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#define SIZE 500
using namespace std;

char stack[SIZE];
int top=-1;

void push(char ch){

     stack[++top]=ch;
}
char pop(){

    return (stack[top--]);


}
int pre(char ch){

    switch(ch){

         case '#':
             return 0;
         case '(':
             return 1;
         case '+':
         case '-':
             return 2;
         case '*':
         case '/':
             return 3;

    }
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

           char infx[500],pofx[500],ch,dump;
           int i=0,k=0;
           scanf("%s",infx);
           push('#');
           while((ch=infx[i++])!='\0'){

                if(ch=='(')
                   push(ch);
                else if(isalpha(ch))
                   pofx[k++]=ch;
                else if(ch==')'){

                     while(stack[top]!='(')
                         pofx[k++]=pop();
                     dump=pop();
                }
                else{

                     while(pre(stack[top])>=pre(ch))
                         pofx[k++]=pop();
                     push(ch);
                }

           }
           while(stack[top]!='#')
                pofx[k++]=pop();
           pofx[k]='\0';
           printf("%s\n",pofx);


    }
    return 0;
}
