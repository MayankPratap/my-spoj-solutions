#include<bits/stdc++.h>
int a[1000005];
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,count[3000]={0},tag=0;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            
            scanf("%d",&a[i]);
            count[a[i]+1000]++;
        }    
        for(i=0;i<n;++i){
        
            if(count[a[i]+1000]>(n/2)){
          
                 ++tag;   
                 printf("YES %d\n",a[i]);
                 break;
            }

        }
        if(tag==0) printf("NO\n");


    }
    return 0;

}
