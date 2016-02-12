#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct Job{

    int start,finish,profit;

};
bool myfunction(Job s1,Job s2){

     return (s1.finish<s2.finish);
}


int latestNonConflict(Job arr[],int i){
    
     int start=0,end=i-1,mid;
     while(start<=end){

         mid=(start+end)/2;
         
         if(arr[mid].finish<=arr[i-1].start){

                 if(arr[mid+1].finish>arr[i-1].start){

                      return mid;
                 }
                 else{

                      start=mid+1;
                 }

         }
         else{

              end=mid-1;
              
         } 
     
     }  
    
     return -1;

}

int findMaxProfitRec(Job arr[],int n){

   

    int *table=new int[n];
    table[0]=arr[0].profit;

    for(int i=1;i<n;++i){

        int inclProf=arr[i].profit;
 
        int l=latestNonConflict(arr,i+1);
    
        if(l!=-1)
           inclProf+=table[l];
 
        table[i]=max(inclProf,table[i-1]); 

    }

    int result=table[n-1];

    delete[] table;
    
    return result;
     
}

int findMaxProfit(Job arr[],int n){

    sort(arr,arr+n,myfunction);
    
    return findMaxProfitRec(arr,n);

}
int main(){

    int t,n,i;
    Job arr[10005];
    scanf("%d",&t);
    while(t--){

        scanf("%d",&n);
        for(i=0;i<n;++i){

            scanf("%d%d%d",&arr[i].start,&arr[i].finish,&arr[i].profit);
         
            arr[i].finish+=arr[i].start;

        }
        printf("%d\n",findMaxProfit(arr,n));

    }
    return 0;

}
