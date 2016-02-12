#include<bits/stdc++.h>
using namespace std;

char s[10100];
int i;

int depth(){

   if(s[i++]=='l')
       return 0;

   return max(depth(),depth())+1;


}

int main(){

   int t;
   scanf("%d",&t);
   
   while(t--){

       
        scanf("%s",s);   
       
        i=0; 

        printf("%d\n",depth());

    }
    return 0;

}
