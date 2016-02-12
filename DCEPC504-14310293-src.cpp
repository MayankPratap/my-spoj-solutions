#include<bits/stdc++.h>
char checkgender(int n,long long int k){

    if(n==0&&k==0) return 'm';
    
    long long int pospar=k>>1;
    
    char gender=checkgender(n-1,pospar);

    if(k==2*pospar){
    
        if(gender=='m') return 'm';
        return 'f';

    }
    
    else{

        if(gender=='m') return 'f';
        return 'm';
  
    }

}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n;
        long long int k;
        scanf("%d %lld",&n,&k);
        if(checkgender(n-1,k-1)=='m')
            printf("Male\n");
        else
            printf("Female\n");
    }
    return 0;
}
