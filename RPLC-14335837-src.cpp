#include<bits/stdc++.h>
long long int value[1000005];
int main(){

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){

        int n,j;
        scanf("%d",&n);
          
        for(j=0;j<n;++j)
            scanf("%lld",&value[j]);
       
        long long int initsum=1,cursum=1;
       
        if(value[0]<0){

       
            initsum+=-value[0];
            cursum=1;
        }
      
        else{

            cursum+=value[0];
        }
        for(j=1;j<n;++j){
       
            if(value[j]>=0){

                cursum+=value[j];        
            }
            else if(value[j]<0){

                if(cursum<=(-value[j])){
                  
                    initsum+=-value[j]-cursum+1;
                    cursum=1;
                }
                else{
                    cursum=cursum+value[j];
                }
                 
            }
        }
            printf("Scenario #%d: %lld\n",i,initsum);
    }
    return 0;

}
