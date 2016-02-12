#include<bits/stdc++.h>
int main(){


    int r,b;
    scanf("%d %d",&r,&b);
   
    int x=4+r,y=16*(r+b);
    
    int z=(int)sqrt(x*x-y); 
    int ans1=(x+z)/4,ans2=(x-z)/4;
    
    if(ans1>=ans2)  printf("%d %d\n",ans1,ans2);
    
    else printf("%d %d\n",ans2,ans1);


    return 0;

}
