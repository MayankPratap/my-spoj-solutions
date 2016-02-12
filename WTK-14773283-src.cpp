#include<bits/stdc++.h>
using namespace std;

int f(int n,int k,int m){

   if(n==1)
       return 0;

   return (f(n-1,k,m+1)+m*k)%n;
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         int n;
         scanf("%d",&n);
         printf("%d\n",f(n,1,1)+1);
 
     }
     return 0;

}
