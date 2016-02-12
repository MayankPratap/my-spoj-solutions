#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#define mod 1000000007
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){

          bool check=true;
          int n,maxN[70],i;
          scanf("%d",&n);
          for(i=0;i<n;++i)
              scanf("%d",&maxN[i]);    
          sort(maxN,maxN+n);
          long long int prod=1;
          for(i=0;i<n;++i){

                 if(maxN[i]>i)
                    prod=(prod*(maxN[i]-i))%mod;
                  else {check=false;
                           break;
                  }
          }
           if(check==true)
              printf("%lld\n",prod%mod);
           else
              printf("0\n");
          
    }

     printf("KILL BATMAN\n");      
    return 0;

}
