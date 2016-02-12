#include<bits/stdc++.h>
int x1[2005],x2[2005];
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,x,y,u,v,q,indicator;
        double pos;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%d %d %d %d",&x,&y,&u,&v);
            x1[i]=x;
            x2[i]=u;
        }
     
        scanf("%d",&q);   
        for(i=0;i<q;++i){

             scanf("%d ",&indicator);
             if(indicator==0){
                 scanf("%lf",&pos);
                 int cwall=0;
                 for(int j=0;j<n;++j){

                     if(pos>=(double)x1[j]&&pos<=(double)x2[j]){
                       
                          ++cwall;  
                     }

                 }
                 printf("%d\n",cwall);
                 cwall=0;
             }
             else{
                 scanf("%d %d %d %d",&x,&y,&u,&v);
                 x1[n]=x;
                 x2[n]=u;
                 ++n;
             }
 
        }


    }
    return 0;

}
