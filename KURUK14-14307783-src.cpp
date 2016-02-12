#include<bits/stdc++.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,a[1005],hash[1005]={0},i,tag;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
            ++hash[a[i]];
        }
       
        if(n%2!=0){

           int m=n/2;
            for(i=1;i<=m;++i){

                if(hash[i]==2||hash[n-i-1]==2||(hash[n-i-1]==1&&hash[i]==1)){
                    tag=1;
                }
                else{

                     tag=-1;
                     break;
                }
           }
           if(tag==1){

               if(hash[n/2]==1&&hash[n-1]==2) tag=1;
               else tag=-1;

           }
           if(tag==-1)
               printf("NO\n");
           else
               printf("YES\n");

        }
        else{

             int m=n/2;
             for(i=1;i<=m;++i){
        
                 if(hash[i]==2||hash[n-i-1]==2||(hash[n-i-1]==1&&hash[i]==1)){
                     tag=1;
                 }
                 else{

                     tag=-1;
                     break;
                 }
             }
             if(tag==1){

                 if(hash[n-1]==2) tag=1;

                 else tag=-1;
             }
             if(tag==-1)
                 printf("NO\n");
             else
                 printf("YES\n");
       }


   }
    return 0;
}
