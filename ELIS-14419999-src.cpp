#include<bits/stdc++.h>
int lis(int *arr,int n){

    int *lis,i,j,max=0;
    lis=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;++i)
          lis[i]=1;
    
    for(i=1;i<n;++i){

         for(j=0;j<i;++j){
               
               if(arr[j]<arr[i]&&lis[i]<lis[j]+1)
                     lis[i]=lis[j]+1;
         }
    }
    for(i=0;i<n;++i)
         if(max<lis[i])
             max=lis[i];
    
    return max;


}
int main(){

    int n,arr[15],i;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    printf("%d\n",lis(arr,n));
    return 0;

}
