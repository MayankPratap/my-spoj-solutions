#include<bits/stdc++.h>
int main(){

 
    while(1){
        long long int sum1[11000]={0},sum2[11000]={0},a1[11000],a2[11000],cp[22000]={0};
        long long int s1,s2,i,j,summ1=0,summ2=0,res=0;
        scanf("%lld ",&s1); 
        if(s1==0) break;
        for(i=0;i<s1;++i){
           scanf("%lld",&a1[i]);
           cp[a1[i]+10000]++;
        }
         scanf("%lld",&s2);
        for(i=0;i<s2;++i){
           scanf("%lld",&a2[i]);
           cp[a2[i]+10000]++;
        }
        long long int count=0;
        for(i=0,j=0;i<s1;++i){

           if(cp[a1[i]+10000]==2){
          
                sum1[j++]=summ1+a1[i];
                summ1=0;
                ++count;
           }
           else{
 
                summ1+=a1[i];
           }
        }
       
        sum1[j]=summ1;
      
        for(i=0,j=0;i<s2;++i){

           if(cp[a2[i]+10000]==2){

                sum2[j++]=summ2+a2[i];
                summ2=0;

           }
           else{

                summ2+=a2[i];
           }
        }
        sum2[j]=summ2;
   
        for(i=0;i<=count;++i){

            if(sum1[i]>=sum2[i]){

                res+=sum1[i];
            }
            else{
                
                res+=sum2[i];
            }
        }

        printf("%lld\n",res);
    }
    
   return 0;
}
