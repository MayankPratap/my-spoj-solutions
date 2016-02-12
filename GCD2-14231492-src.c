#include<stdio.h>
#include<string.h>
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
     int a,b[255],len,rem=0,i;
     char str[255];
     scanf("%d %s",&a,str);
     len=strlen(str);
     for(i=0;i<len;++i)
     b[i]=(int)str[i]-48;
     if(a==0&&b[0]==0)
        printf("0\n");
     else if(a==0&&b[0]!=0)
     {
         for(i=0;i<len;++i)
            printf("%d",b[i]);
         printf("\n");
     }
     else if(a!=0&&b[0]==0)
        printf("%d\n",a);
     else
     {
         for(i=0;i<len;++i)
        {
            if(rem*10+b[i]<a)
            rem=rem*10+b[i];
            else if(rem*10+b[i]>=a)
           {
            rem=rem*10+b[i];
            rem=rem%a;
            }
         }
          printf("%d\n",gcd(rem,a));
      }
  }
   return 0;

}
