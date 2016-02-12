#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<sstream>
#include<vector>
#include<algorithm>
#define MAX 1000005

using namespace std;

int arr[MAX];

void pre(){

   int i,j,k;
   for(i=1;i<=1000;++i){

        for(j=i+1;j<=1000;++j){

             for(k=1;k*(i*i+j*j)<=1000000;++k)
                  arr[k*(i*i+j*j)]=1;
        }
   
   }


}

int main(){

    int t;
    pre();
    scanf("%d",&t);
    while(t--){

       int s;          
       scanf("%d",&s);
       if(arr[s]==1)
          printf("YES\n");
       else
          printf("NO\n");
    }
    return 0;

}
