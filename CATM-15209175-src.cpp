#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,i,j;
    scanf("%d %d",&n,&m);

    int t;

    scanf("%d",&t);

    while(t--){

         int mousedist[110][110]={0};
         int cat1dist[110][110]={0};
         int cat2dist[110][110]={0};

         int mx,my,c1x,c1y,c2x,c2y;

         scanf("%d %d %d %d %d %d",&mx,&my,&c1x,&c1y,&c2x,&c2y);

         for(j=1;j<=m;++j){

             mousedist[1][j]=abs(mx-1)+abs(my-j);
             mousedist[n][j]=abs(n-mx)+abs(my-j);

         }

         for(i=1;i<=n;++i){

             mousedist[i][1]=abs(mx-i)+abs(my-1);
             mousedist[i][m]=abs(mx-i)+abs(my-m);

         }

          for(j=1;j<=m;++j){

             cat1dist[1][j]=abs(c1x-1)+abs(c1y-j);
             cat1dist[n][j]=abs(n-c1x)+abs(c1y-j);

         }

         for(i=1;i<=n;++i){

             cat1dist[i][1]=abs(c1x-i)+abs(c1y-1);
             cat1dist[i][m]=abs(c1x-i)+abs(c1y-m);

         }

          for(j=1;j<=m;++j){

             cat2dist[1][j]=abs(c2x-1)+abs(c2y-j);
             cat2dist[n][j]=abs(n-c2x)+abs(c2y-j);

         }

         for(i=1;i<=n;++i){

             cat2dist[i][1]=abs(c2x-i)+abs(c2y-1);
             cat2dist[i][m]=abs(c2x-i)+abs(c2y-m);

         }

         int flag=0;

         for(j=1;j<=m;++j){

            if(mousedist[1][j]<cat1dist[1][j]&& mousedist[1][j]<cat2dist[1][j])
                flag=1;

            if(mousedist[n][j]<cat1dist[n][j]&& mousedist[n][j]<cat2dist[n][j])
                flag=1;

         }

         for(i=1;i<=n;++i){

            if(mousedist[i][1]<cat1dist[i][1]&& mousedist[i][1]<cat2dist[i][1])
                flag=1;

            if(mousedist[i][n]<cat1dist[i][n]&& mousedist[i][n]<cat2dist[i][n])
                flag=1;

         }

         if(flag==1)
            printf("YES\n");

         else
            printf("NO\n");


    }
    return 0;
}
