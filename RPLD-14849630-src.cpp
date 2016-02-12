#include<bits/stdc++.h>
using namespace std;

int main(){

   set<pair<int,int> > s;
   int t,i;
   scanf("%d",&t);
   for(i=1;i<=t;++i){

        int n,r,x,y,res,j;
        scanf("%d %d",&n,&r);
        for(j=1;j<=r;++j){

            scanf("%d %d",&x,&y);
            s.insert(make_pair(x,y));
            
       }
      
   //    printf("%d %d\n",r,s.size());
       if(r==s.size())
         printf("Scenario #%d: possible\n",i);
       else
         printf("Scenario #%d: impossible\n",i);
       s.clear(); 
   }
   return 0;
}
