#include<bits/stdc++.h>

using namespace std;

int sieve[10009],primes[10009],k=0;

void pre(){

    int i,j;
    for(i=2;i<10009;++i){

        if(sieve[i]==0){

              for(j=i*i;j<10009;j+=i){

                    
                     sieve[j]=1;            

              }
            primes[k++]=i;
        }

    }

}


int main(){

    int n;
    pre();
    scanf("%d",&n);
       
    int i=0,a,sum,temp;
    for(i=0;i<k;++i){
       a=primes[i];
       sum=0;
       while(1){     

          temp=n/a;
          if(temp==0) break;
          sum+=temp;  
          a*=primes[i];
       }
       if(sum!=0&&i==0)
          printf("%d^%d ",primes[i],sum);
       else if(sum!=0 &&i!=0)
          printf("* %d^%d ",primes[i],sum);
    }
    return 0;

}
