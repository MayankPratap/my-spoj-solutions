#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
long long int power(int base,int expo)
{
    if(expo==0)
    return 1;
    long long int f=power(base,expo/2);
    if((expo&1)==0)
    return f*f;
    return f*f*base;
}
int main(){

     int t;
     scanf("%d",&t);
     while(t--){
 
          char s[35];
          int input[35],i,count=1;
          long long int res=1;
          scanf("%s",s);
          int len=strlen(s);
          input[0]=s[0]-48;
          for(i=1;i<len;++i){

               input[i]=s[i]-48;
               if(input[i]==input[i-1]){

                    ++count;
               }
               else{

                  res*=power(2,count-1);
                  count=1; 
               }
          }
          if(count>1)
              res*=power(2,count-1);
          printf("%lld\n",res);
           
    }
    return 0;

}
