#include<bits/stdc++.h>
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        int n,a[100005],tag=0,i;
        scanf("%d",&n);
         
        for(i=1;i<=n;++i)
            scanf("%d",&a[i]);
    
        for(i=1;i<=n;++i){

            if(a[i]>i-1){

                printf("NO\n");
                ++tag;
                break;
            }

        }
        
        if(tag==0) printf("YES\n");   
    }

    return 0;

}
