#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[105];
    int n,len,i,count,m,j;
    while(1){
         
        scanf("%s",str);
        if(str[0]=='*')
             break;
        scanf("%d",&n);
        len=strlen(str);
        for(i=0;i<len;++i){

             m=i+1;
             count=1;
             for(j=m-1;j<len;){
 
                  if(str[j]=='0')
                     str[j]='1';
                  else
                     str[j]='0';
                
                  ++count; 
                  j=count*m-1;
                
             }
        }
        count=0;
   
        for(i=0;i<len;++i){

             if(str[i]=='1')
               ++count;
        }
        if(n-count<=0)
           printf("kill kauravas!\n");
        else if(n-count==1)
           printf("save 1 friend and kill kauravas!\n");
        else
           printf("save %d friends and kill kauravas!\n",n-count);

    }
    return 0;

}
