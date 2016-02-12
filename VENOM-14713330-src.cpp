#include<bits/stdc++.h>
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        int h,p,a;
        scanf("%d %d %d",&h,&p,&a);
        if(h<p){
           printf("1\n");
           continue;
        }
        double res1=2*a-p;
        double res2=sqrt((res1*res1)-8*p*(a-h));
        double res3=2*p;
        long long res4=ceil((res1+res2)/res3);
        long long ans=2*res4-1;
        printf("%lld\n",ans);


   }

    return 0;

}
