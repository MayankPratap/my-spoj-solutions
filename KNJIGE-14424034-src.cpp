#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,a[300005],b[300005],swap=0,j;
    scanf("%d",&n);
    for(i=0;i<n;++i){
         scanf("%d",&a[i]);
         b[i]=a[i];
    }
    sort(b,b+n);
    for(i=n-1,j=n-1;i>=0;--i){

        if(a[i]==b[j]) --j;
        else
          ++swap;
    }
    printf("%d\n",swap);
    return 0;

}
