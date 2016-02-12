#include<bits/stdc++.h>
int main(){

    while(1){

         char s1[15],s2[15];
         int cs1[15]={0},cs2[15]={0};
         scanf("%s %s",s1,s2);
         if(s1[0]=='0'&&s2[0]=='0') break;
         int len1=strlen(s1),len2=strlen(s2),i,j;
         for(i=len1-1,j=15;i>=0;--i,--j){
                   
               cs1[j]=(int)s1[i]-48;
               
         }
         for(i=len2-1,j=15;i>=0;--i,--j){
          
                  
               cs2[j]=(int)s2[i]-48;

         }
         int temp,carry=0,count=0;
         for(j=15;j>=0;--j){
   
               temp=cs1[j]+cs2[j]+carry;           
               if(temp>9){
                       carry=temp/10;
                       ++count;
               }
               else carry=0;

         }  
         if(count==0) printf("No carry operation.\n");
         else if(count==1) printf("%d carry operation.\n",count);
         else printf("%d carry operations.\n",count);
        
   }
    return 0;

}
