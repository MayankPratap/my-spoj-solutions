#include<bits/stdc++.h>
using namespace std;
long long power(int base,int expo){

    if(expo==0)
        return 1;
    long long f=power(base,expo/2);
    
    if((expo&1)==0)
       return f*f;
    return f*f*base;

}
int main(){
   
      char str[100];
      int bfrom,bto,len,i;
      long long num,res;
      while((scanf("%s %d %d",str,&bfrom,&bto))!=EOF){
 
          len=strlen(str);
          num=0;
          char alpha[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
          char result[100];
          for(i=len-1;i>=0;--i){

               res=power(bfrom,len-1-i);

               if(isalpha(str[i])){
 
                    switch(str[i]){

                         case 'A':
                            num+=10*res;
                            break; 
                         case 'B':
                            num+=11*res;
                            break;
                         case 'C':
                            num+=12*res;
                            break;                         
                         case 'D':
                            num+=13*res;
                            break;
                         case 'E':
                            num+=14*res;
                            break;
                         case 'F':
                            num+=15*res;
                            break;         
                   }

               }
               else{

                   num+=(str[i]-48)*res;
                       
              }
               
         }
          int k=0;
          while(num>0){
                   
               result[k++]=alpha[num%bto];
               num/=bto;
          }
          if(k<=7){
             
             for(i=7-k;i>0;--i)
                printf(" ");
             for(i=k-1;i>=0;--i){

               printf("%c",result[i]);
               
             }
             printf("\n");
          }
          else
             printf("  ERROR\n");
          
      }
      return 0;
}
