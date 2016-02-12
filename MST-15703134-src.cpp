//Solving CHSTAMPS Problem

#include<bits/stdc++.h>
using namespace std;

const int N=2e5+1;
const int M=5e4+1;

int sc[M];
vector<pair<int,int> >offers[M];

int bp[M],bp2[M],p[M],bst[M];

void initialize(){

   for(int i=0;i<M;++i){

       offers[i].clear();
       bp[i]=i;
       sc[i]=0;

   }

}

int parent(int x){

   if(p[x]==x) return x;

   else return p[x]=parent(p[x]);

}

void join(int x,int y){

   int py=parent(y);

   int px=parent(x);

   bst[py]=max(bst[py],bst[px]);

   p[px]=py;

}

int main(){

    std::ios_base::sync_with_stdio(false);  
    
    int tc;

    cin>>tc;

    while(tc--){

        initialize();

        int n,m;

        scanf("%d %d",&n,&m);

        for(int i=0;i<n;++i){

              int x;

              cin>>x;

              sc[x]++;

        }

        for(int i=0;i<m;++i){

           int t,x,y;
 
           cin>>t>>x>>y;

           offers[t].push_back(make_pair(x,y));

        }

        for(int i=M-1;i>=1;i--){

            for(int j=0;j<offers[i].size();j++){

                 int x=offers[i][j].first;
                 int y=offers[i][j].second;

                 p[x]=x;

                 p[y]=y;

                 bst[x]=bp[x];

                 bst[y]=bp[y];


           }
 
           for(int j=0;j<offers[i].size();j++){

               int x=offers[i][j].first;
               int y=offers[i][j].second;
 
               if(parent(x)!=parent(y)){

                    join(x,y);

               }

           }

           for(int j=0;j<offers[i].size();j++){

              int x=offers[i][j].first;

              int y=offers[i][j].second;

              bp[x]=bst[parent(x)];

              bp[y]=bst[parent(y)];

           }
 
        }

        long long ans=0;

        for(int i=1;i<M;++i){

           ans+=1LL*sc[i]*bp[i];

        }

        cout<<ans<<'\n';

    }

    return 0;
}


