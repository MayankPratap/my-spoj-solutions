#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
          
         vector< pair<int,int> > t;
         int x,y,i,n;
         scanf("%d",&n);
         for(i=0;i<n;++i){

               scanf("%d %d",&x,&y);
               t.push_back(make_pair(x,1));
               t.push_back(make_pair(y,0));
         }
         sort(t.begin(),t.end());
         int count=0,max=0;
         for(i=0;i<t.size();++i){
 
                if(t[i].second) count++;
                else count--;
                if(count>max) max=count;

         }
          printf("%d\n",max);
        
    }
     return 0;

}
