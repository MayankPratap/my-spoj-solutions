#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main()
{
     int n,arr[100005];
     scanf("%d",&n);
     int i,hcf;
     for(i=0;i<n;++i)
     scanf("%d",&arr[i]);
     std::sort(arr,arr+n); 
     hcf=arr[1]-arr[0];
     for(i=1;i<n-1;++i)
     hcf=gcd(arr[i+1]-arr[i],hcf); 
     int sum=0;
     for(i=0;i<n-1;++i)
     sum+=(arr[i+1]-arr[i])/hcf-1;
     printf("%d\n",sum);
  return 0;
}
