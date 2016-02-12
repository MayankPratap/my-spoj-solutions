#include<stdio.h>
int main(){
int n;
while((scanf("%d",&n)==1)){
long long int pi,a=0;
while(n--){
scanf("%lld",&pi);
a=a^pi;
}
printf("%lld\n",a);
}
return 0;
}
