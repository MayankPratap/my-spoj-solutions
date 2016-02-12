#include<stdio.h>
#define max 1000001
int npf[max];
int abhitak[max][11];
void precompute(){

     int i,j;
     for(i=2;i<max;++i){
 
          if(npf[i]==0){

                 npf[i]=1;
                 for(j=i<<1;j<max;j+=i) npf[j]++;   
          }
     }
     for(i=1;i<max;++i){

            for(j=0;j<11;++j){

                 if(npf[i]==j) abhitak[i][j]=abhitak[i-1][j]+1;
                 else abhitak[i][j]=abhitak[i-1][j];

           }

     }   
    
}

int main()
{
  precompute();
  int t;
  scanf("%d",&t);
  while(t--)
  {
         int a,b,n,p,i,j;
         scanf("%d %d %d",&a,&b,&n);
         int count=0,flag=0,tag=0;
        
      printf("%d\n",abhitak[b][n]-abhitak[a-1][n]);     
         
  }
  return 0;
}
