#include<bits/stdc++.h>
using namespace std;
int main(){
   
    char s1[1005],s2[1005];
    while(1){
         
        int count1[30]={0},i,count2[30]={0},k,j;
        char store[1005];
        if(scanf("%s",s1)!=1) break;
        if(scanf("%s",s2)!=1) break;
        int len1=strlen(s1),len2=strlen(s2);
 
        for(i=0;i<len1;++i){           
         
            count1[(int)s1[i]-97]++;
        }
        for(i=0;i<len2;++i){
            count2[(int)s2[i]-97]++;      
        }
        for(i=0,k=0;i<26;++i){

            if(count1[i]>=1&&count2[i]>=1)
            {
                 
                 if(count1[i]>=count2[i]){

                     for(j=1;j<=count2[i];++j){
                         
                         store[k++]=(char)(i+97);
                      
                     }
                 }
                 else{


                     for(j=1;j<=count1[i];++j){
                   
                         store[k++]=(char)(i+97);

                     }
                 }
             }

        } 
         sort(store,store+k);
         for(i=0;i<k;++i)
         printf("%c",store[i]);
         printf("\n");       
   }
    
    return 0;

}
