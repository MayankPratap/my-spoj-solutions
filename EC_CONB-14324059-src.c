#include<stdio.h>
long long int power(int base,int expo){
    if(expo==0)
    return 1;
    if(expo%2==0)
    {
        int m=power(base,expo/2);
        return m*m;
    }
    return  base*power(base,expo-1);

}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){

        long long int num;
        scanf("%lld",&num);
        if(num%2==0){

            long long int mask=1,res=0;
            int a[64]={0},i,pos;
            for(i=0;i<=63;++i){

                if((num&mask)==0)
                    a[i]=0;
                else a[i]=1;
                mask=mask<<1;
            }
            for(i=63;i>=0;--i){

                 if(a[i]==1){
                     pos=i;
                     break;
                 }
            }
            for(i=0;i<=pos;++i){
                if(a[i]==1)
                res+=power(2,pos-i)*a[i];
            }
            printf("%lld\n",res);
        }

        else{
         
            printf("%lld\n",num);
        }
    }
     return 0;

}
