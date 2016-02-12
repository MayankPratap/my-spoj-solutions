#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,j;
        scanf("%d",&n);  
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
        }       
        sort(a,a+n);
        int count=0;
        for(i=0;i<n;++i){
                if(a[i]!=0){
                    for(j=i+1;j<n;++j){
           
                         if(a[j]==(2*a[i])){
                             ++count;
                             a[j]=0;
                             break;
                         }
                    }
        
               } 
       }

        printf("%d\n",count);
   }

    return 0;

}
