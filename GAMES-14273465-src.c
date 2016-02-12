#include<stdio.h>
#include<string.h>
#include<math.h>
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
   char arr[200];
   int proxy[200];
   scanf("%s",arr);
   long int len,i,j,num=0,dp=0,den;
   len=strlen(arr);
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
    printf("%ld\n",den/hcf);
  }
   else
   printf("1\n");
 }
return 0;
}