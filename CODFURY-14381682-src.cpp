#include<bits/stdc++.h>
int station[1000000];
long long int store[1000000];
int main(){


     int t;
     scanf("%d",&t);
     while(t--){

        
   
         int a[50005],i,j,p,m,k,pos,count=0;
         scanf("%d %d",&p,&m);
         for(i=0;i<p;++i)
             scanf("%d",&a[i]);
        
         long long int sum=0,minsum=m;
         int st=0,maxst=0,start=0;
         for(i=0;i<p;++i){

              sum+=a[i];
              st++;
              if((st>maxst&&sum<=m)||(st==maxst&&sum<=minsum)){

                   maxst=st;
                   minsum=sum;
              }
              while(sum>m){

                   sum=sum-a[start];
                   ++start;
                   st--;
              }
              if((st>maxst&&sum<=m)||(st==maxst&&sum<=minsum)){

                   maxst=st;
                   minsum=sum;
              }
        }
         
        printf("%lld %d\n",minsum,maxst);

    }
 
     return 0;

}
