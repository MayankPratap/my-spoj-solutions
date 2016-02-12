#include<stdio.h>
int main(){

    int arr[15]={0},i,sumbore=0,sumafter=0;
    for(i=0;i<10;++i)
        scanf("%d",&arr[i]);
    for(i=0;i<10;++i){
    
        if(sumbore+arr[i]<=100){
            sumbore+=arr[i];
            sumafter+=arr[i];
        }
        else{
      
            sumafter+=arr[i];
            break;
        }
   }
        
        if((100-sumbore)<(sumafter-100))
            printf("%d\n",sumbore);
        else if((100-sumbore)>(sumafter-100))
            printf("%d\n",sumafter);
        if(100-sumbore==sumafter-100)
            printf("%d\n",sumafter);
    return 0;
}
