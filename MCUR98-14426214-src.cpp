#include<bits/stdc++.h> 
using namespace std;
int a[1000000];
int main(){
    int i,res;
    for(i=1;i<1000000;++i){
        
        if(a[i]==0) printf("%d\n",i);   
        res=i+(i%10)+(i/10)%10+(i/100)%10+(i/1000)%10+(i/10000)%10+(i/100000)%10;
        a[res]=1;
    }
return 0;
}
