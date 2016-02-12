#include<bits/stdc++.h>
int k,l,m,i,n,a[1000005];
bool isWin(int n){

    int i;
    a[0]=0,a[1]=1;
    for(i=2;i<=n;++i){

         if(i>1&&i<k){

              if(a[i-1]==0) a[i]=1;
              else a[i]=0;
         }
         else if(i>=k&&i<l){

              if(a[i-1]==0||a[i-k]==0) a[i]=1;
              else a[i]=0;
         }
         else if(i>=l&&i<k){
         
              if(a[i-1]==0||a[i-l]==0) a[i]=1;
              else a[i]=0;
         }
         else if(i>=k&&i>=l){

              if(a[i-1]==0||a[i-k]==0||a[i-l]==0) a[i]=1;
              else a[i]=0;
         }
              
    }
    return a[n];

}
int main(){
    
    scanf("%d %d %d",&k,&l,&m);
    for(i=1;i<=m;++i){
  
        scanf("%d",&n);
       
        if(isWin(n))
            printf("A"); 
        else
            printf("B");
          
   }
    printf("\n");

    return 0;

}
