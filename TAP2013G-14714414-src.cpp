#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,j,quad[100005],nlogn[100005],wins=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
         scanf("%d",&quad[i]);
    for(i=0;i<n;++i)
         scanf("%d",&nlogn[i]);
    sort(quad,quad+n);
    sort(nlogn,nlogn+n);
    for(i=0,j=0;;){
                   
            if(i==n||j==n)
               break;
            if(quad[i]>=nlogn[j]){

                ++j;     
            }      
            else if(quad[i]<nlogn[j]){
               
                  ++i;
                  ++j;
                  wins++; 

            }

     }
      printf("%d\n",wins);
     return 0;
}
