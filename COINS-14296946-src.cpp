#include<bits/stdc++.h>
long long int store[1000000]={0};
long long int max(long long int a,long long int b){
if(a>=b)
return a;
else
return b;
}
long long int maxamount(long long int n){
    long long int $max;
if(n==0)
    return 0;
    if(n<1000000){
if(store[n]!=0)
    return store[n];
     $max=max((maxamount(n/2)+maxamount(n/3)+maxamount(n/4)),n);
    store[n]=$max;
    }
    else{
        $max=max((maxamount(n/2)+maxamount(n/3)+maxamount(n/4)),n);
    }
    return $max;
}
int main(){
long long int n;
while((scanf("%lld",&n))==1){
    printf("%lld\n",maxamount(n));
}
return 0;
}

