#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
long long int fact[20];
void initial(int n,long long int *fact)
{
  for(int i=0;i<n+1;++i)
  {
     fact[i]=-1;
  }
}
long long int factorial(int n)
{
  if(n==0)
  return 1;
  if(fact[n]!=-1)
  return fact[n];
  int r=n*factorial(n-1);
  fact[n]=r;
  return r;
}
int main(){

  
    int n,k;

    while(scanf("%d %d",&n,&k)==2){
          
        vector<int> v(15);
        initial(n,fact);
        long long int mult=1;
        int i;
        for(i=0;i<k;++i){
            scanf("%d",&v[i]);
            mult*=factorial(v[i]);
        }  
        long long int res=factorial(n)/mult;
        printf("%lld\n",res);

    }

    return 0;
}
