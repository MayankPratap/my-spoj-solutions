#include<stdio.h>
long long int power(int base,int expo)
{
    if(expo==0)
    return 1;
    if(expo%2==0)
    return power(base*base,expo/2);
    return base*power(base,expo-1);
}
int main(){

   int count=0;
   
   while(1){

       ++count;
       int coff[1005],points[105],n,k,i,j,l=0;
       long long int store[110];
       scanf("%d",&n);
       if(n==-1) break;     
       for(i=n;i>=0;--i){
             scanf("%d",&coff[i]);    
       }
       scanf("%d",&k); 
       for(i=0;i<k;++i){
             scanf("%d",&points[i]);  
              int val=points[i];
              long long int res=0;
              for(j=n;j>=0;--j){

                    res+=coff[j]*power(val,j);         
              } 
              store[l++]=res;          
       }
       printf("Case %d:\n",count);
       for(i=0;i<l;++i){

            
              printf("%lld\n",store[i]);
              
       }  

   }

   return 0;

}