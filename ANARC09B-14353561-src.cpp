#include<bits/stdc++.h>
long long int gcd(long long int a,long long int b)
{
  if(a==0)
  return b;
  return gcd(b%a,a);
}
int main(){
    
    long long int w,h;
    while(1){
        
        scanf("%lld %lld",&w,&h);
        if(w==0&&h==0) break;
        
        long long int lcm=(w*h)/gcd(w,h);
        
        printf("%lld\n",(lcm/w)*(lcm/h));
    }
    return 0;

}
