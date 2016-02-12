#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
unsigned long long int pow_10[19] = {1 , 10 , 100 , 1000 , 10000 , 100000 , 1000000 , 10000000 , 100000000 , 1000000000 , 10000000000LL , 100000000000LL , 1000000000000LL , 10000000000000LL , 100000000000000LL , 1000000000000000LL , 10000000000000000LL , 100000000000000000LL , 1000000000000000000LL};
int main(){

    while(1){

        char s[50];
        scanf("%s",s);
        if(s[0]=='0' && strlen(s)==1) break;
        if(s[0]=='1' && strlen(s)==1) printf("1/1\n"); 
        else{
            int len=strlen(s)-5,copylen,i;
            copylen=len;
            unsigned long long int n=0,m,num,divisor,mindiv=999999999999999999,minnum;
            for(i=2;i<len+2;++i)
                n=n*10+s[i]-48;
            m=n;
            for(i=0;i<copylen;++i){

                num=m-n/10;
                divisor=pow_10[copylen]-pow_10[len-1];
                long long int hcf=gcd(num,divisor);  
                if((divisor/hcf)<mindiv){

                    mindiv=divisor/hcf;
                    minnum=num/hcf;
                    
                }
              n=n/10;
              len--;
           }
           printf("%llu/%llu\n",minnum,mindiv);

      }
  }
   return 0;
}
