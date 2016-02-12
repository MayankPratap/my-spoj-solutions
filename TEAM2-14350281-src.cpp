#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[4],count=0;
    while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF){
       
        ++count;
        sort(a,a+4);
        int height=a[2]+a[3],width=a[2]+a[3];
        if(a[1]<=height-a[3]) printf("Case %d: %d\n",count,height);
        else{

            height=height+a[1]-(height-a[3]);
            printf("Case %d: %d\n",count,height);
        }
        
    }
    return 0;

}
