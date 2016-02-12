#include<bits/stdc++.h>
using namespace std;
int n,v[2005],cache[2005][2005];
int profit(int be,int en){

    if(be>en) return 0;
    
    if(cache[be][en]!=0){
        return cache[be][en];
   }
    int year=n-(en-be+1)+1;
     
      return cache[be][en]=max(
         year*v[be]+profit(be+1,en),
         year*v[en]+profit(be,en-1));     
}
int main(){

    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&v[i]);
      int res=profit(0,n-1);
      printf("%d\n",res);   
    return 0;

}
