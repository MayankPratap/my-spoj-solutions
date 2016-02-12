#include<bits/stdc++.h>
using namespace std;

multiset<int> s;
multiset<int>:: iterator it1,it2;

int k,i,n,x;
long long sum=0;

int main(){

   scanf("%d",&n);
   while(n--){

      scanf("%d",&k);
      while(k--){

          scanf("%d",&x);
          s.insert(x);

      }
      it1=s.begin();
      it2=s.end();
      it2--;
      sum+=(*it2-*it1);
      s.erase(it1);
      s.erase(it2);

  }
   
   printf("%lld\n",sum); 
   return 0;
}
