#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

long long int input[100005];

int main(){

    int i=0,a;
    
    while(scanf("%d",&a)!=EOF){

         input[i++]=a;
    }
    sort(input,input+i);
    int lim=i,cur=0,prev=0;
    input[i]=10000000000;
    for(i=1;i<=lim;++i){

          if((input[i]-input[i-1])>1){

              
               printf("for (int i = %lld; i <= %lld; i++) cout << i << \" \";\n",input[prev],input[i-1]);
              prev=i;
          }

    }
    return 0;
}
