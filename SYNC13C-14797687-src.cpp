#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         int c1,c2;
         scanf("%d%d",&c1,&c2);
         if((c1&1)==0 && (c2&1)==0)
             printf("Suresh\n");
         else if((c1&1)!=0 && (c2&1)!=0)
             printf("Ramesh\n");
         else if((c1&1)==0 && (c2&1)!=0)
             printf("Suresh\n");
         else if((c1&1)!=0 && (c2&1)==0)
             printf("Suresh\n");


    }
    return 0;
}
