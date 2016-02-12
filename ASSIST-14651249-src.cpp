#include<bits/stdc++.h>
#define MAX 34000
int fre[5000],arr[MAX];
void pre(){

    int i,j,k,count;
    for(i=2,k=1;i<=MAX;++i){

         if(arr[i]==0){

               arr[i]=1;
               fre[k++]=i;
               count=0;
               for(j=i;j<=MAX;j++){
                    
                   if(arr[j]==0){

                        ++count;
                        if(count==i){
                           arr[j]=1; 
                           count=0;
                        } 
                    
                   }
               }


         }
    }

}
int main(){

   int n;
   pre(); 
    while(1){

       scanf("%d",&n);
       if(n==0)
          break;
       else{

           
           printf("%d\n",fre[n]);

       }

  
    }
     return 0;

}
