#include<bits/stdc++.h>
long long mulmod(long long a,long long b,long long c){

    long long x=0,y=a%c;
    while(b>0){

        if(b%2==1){

            x=(x+y)%c;

        }
         
        y=(y*2)%c;
        b/=2;        
       
    }
    return x%c;
}
long long modulo(long long a,long long b,long long c){

     long long x=1,y=a;
      
     while(b>0){

         if(b%2==1){

             x=mulmod(x,y,c);
         }
         y=mulmod(y,y,c);
         b/=2;
     }

     return x%c;

}
bool checkprime(long long n,int iterations){

    if(n==1) return false;
    for(int i=0;i<iterations;++i){

         long long a=rand()%(n-1)+1;
         
         if(modulo(a,n-1,n)!=1) return false;

    }
     return true;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

         long long n;
         scanf("%lld",&n);
         if(checkprime(n,2)) printf("YES\n");
         else printf("NO\n");

    }
    return 0;

}
