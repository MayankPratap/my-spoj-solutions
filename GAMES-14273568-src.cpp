#include<cstdio>
#include<string>
#include<cmath>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
   string arr;
   string proxy;
   cin>>arr;
   int len,i,j,num=0,dp=0,den;
   len=arr.size();
    for(i=0,j=0;i<len;++i)
   {
      if(arr[i]!='.')
     {
         proxy[j]=(int)arr[i]-48;
         ++j;
     }
     else
      dp=i;
   }
   if(dp!=0)
  {
    for(j=0;j<len-1;++j)
   {
      
     num=num*10+proxy[j];
    }
     den=pow(10,len-1-dp);
    int hcf=gcd(num,den);   
    printf("%d\n",den/hcf);
  }
   else
   printf("1\n");
 }
return 0;
}
