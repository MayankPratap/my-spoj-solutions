#include<iostream>
using namespace std;
#include<set>
#include<map>
#include<string>
#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int j,n;
        scanf("%d\n",&n);
        map<string,int> table;
        map<string,int>::iterator it;
        char str[40];
        for(j=1;j<=n;++j){
            gets(str);
            table[(string)str]++;            
        }
        for(it=table.begin();it!=table.end();it++){

            printf("%s %d\n",it->first.c_str(),it->second);

        }
         
        printf("\n");
   }
          
   return 0;

}
