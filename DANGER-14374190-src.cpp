#include<bits/stdc++.h>
long long int power(long long int base,long long int expo){

 if(expo==0)
    return 1;
 if(expo%2==0)
    return power(base*base,expo/2);
 return base*power(base,expo-1);

}
int main(){
   
    char a[5];
    while(1){
        
        long long num=0;
        int i;
        for(i=0;i<4;++i){
            if(i==0)   
            scanf("\n%c",&a[i]);
            else
            scanf("%c",&a[i]);
        }
        
        if(a[0]=='0'&&a[1]=='0'&&a[2]=='e'&&a[3]=='0')    break;
        num=(10*((int)a[0]-48))+(int)a[1]-48;
        num*=power(10,(int)a[3]-48);
        long long int copynum=num,count=0;
        while(copynum){
    
            copynum=copynum/2;
            ++count;
        }
        printf("%lld\n",2*num-power(2,count)+1);
        
    }

    return 0;
}
