#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,height[1005],width[1005],p[1005][2],ans;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d%d",&height[i],&width[i]);
    p[0][0]=width[0];
    p[0][1]=height[0];
    for(i=1;i<n;++i){

        p[i][0]=max(p[i-1][0]+width[i]+abs(height[i]-height[i-1]),p[i-1][1]+width[i]+abs(height[i]-width[i-1]));
    
        p[i][1]=max(p[i-1][0]+height[i]+abs(width[i]-height[i-1]),p[i-1][1]+height[i]+abs(width[i]-width[i-1]));

   
    }
 
    ans=max(p[n-1][0],p[n-1][1]);
    printf("%d\n",ans);

    return 0;
}
