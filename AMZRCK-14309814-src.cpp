#include<bits/stdc++.h>
long long int fibbo(long long int *f,int n){

    if(n==1)  return 0;
    else if(n==2) return 1;
    
    else{

        if(f[n]!=0)
            return f[n];

        return f[n]=fibbo(f,n-1)+fibbo(f,n-2);
    }

}
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        int n,i;
        scanf("%d",&n);
        long long int f[10000]={0};
        printf("%lld\n",fibbo(f,n+3));        

     }


    return 0;
}
