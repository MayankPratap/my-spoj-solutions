#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<sstream>
#include<cmath>

#define d 26
#define q 13
using namespace std;
char txt[1000005],pat[1000005];
int pos[1000005];
long long int modex(int base,long long int expo){

       if(expo==0) return 1;
       
       long long int f=modex(base,expo/2);
        
       if((expo&1)==0)
         return (f*f)%q;
       return ((f*f)%q*base)%q;
}
 
int main(){

    int cases;
    scanf("%d",&cases);
    while(cases--){
 
          int m,n,k,count=0;
          scanf("%s %s",txt,pat);
           m=strlen(pat);
           n=strlen(txt);
          int i,j;
          long long t=0,p=0,h=1;
          h=modex(d,m-1);
          for(i=0;i<m;++i){
             
               p=(d*p+pat[i])%q;
               t=(d*t+txt[i])%q;
          }
          for(i=0,k=0;i<=n-m;++i){

               if(p==t){
 
                     for(j=0;j<m;j++){
                     
                          if(txt[i+j]!=pat[j])
                              break;                     
                     }
                     if(j==m){
                        
                           ++count;
                           pos[k++]=i;
                     }
               } 
               if(i<n-m){

                     t=(d*(t-(txt[i]*h)%q)+txt[i+m]+q)%q;
                     
               }
          }
          if(count==0)
              printf("Not Found\n");           
          else{
           
               printf("%d\n",count);
               for(i=0;i<k;++i)
                  printf("%d ",pos[i]+1);
               printf("\n");
          }

          printf("\n");
                
    }
    return 0;
}
