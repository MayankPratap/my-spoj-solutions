#include<iostream>
#include<cstdio>
using namespace std;
long long int sqrt(long long int n)
{
    double approx,better;
    approx=(double)n/2.0;
    better=(approx+(double)n/approx)/2.0;
    while(better!=approx)
   {
       approx=better;
       better=(approx+(double)n/approx)/2.0;
   }
   return approx;

}
int main()
{
  int t,i=0;
  cin>>t;
  while(t--)
  { 
     ++i;
     long long int n,m;
     cin>>n;
     double p=sqrt(n);  
     m=(int)p;
     if(m*m==n)
         cout<<"Case"<<' '<<i<<':'<<' '<<"Yes"<<'\n';
     else
         cout<<"Case"<<' '<<i<<':'<<' '<<"No"<<'\n';
  }
return 0;
}

