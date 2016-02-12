#include<bits/stdc++.h>

using namespace std;

void ispower2(int n){
  
        if((n&(n-1))==0)
         printf("Yes\n");
        else 
         printf("No\n");
	     
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,m;
        scanf("%d",&n);
        m=n;
       int i,count;
       double ans=1;
       for(i=2;i*i<=n;++i)
       {   count=0;
           while(n%i==0)
          {
            n=n/i;
            count++;
          }
          if(count)
            ans*=(double)1-(1/(double)i);
       }
       if(n>1)
         ans*=(double)1-(1/(double)n);
        ans*=m;
        int phin=rint(ans);
       
        ispower2(phin);
     }
     return 0;
}
