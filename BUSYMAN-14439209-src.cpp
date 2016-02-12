#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int greedy(vector<std::pair<int,int> >b,int n){

      int count=1;
      int i=0; 
      for(int j=1;j<n;++j){
 
            if(b[j].second>=b[i].first){

                  i=j;
                  ++count;
            }
      }

      return count;
}

int main(){

     int x,y,t;
     int n,res;
     vector<std::pair<int,int> >b;
     scanf("%d",&t);
     while(t--){

          scanf("%d",&n);
          for(int i=0;i<n;++i){

                scanf("%d %d",&x,&y);
                b.push_back(make_pair(y,x));

          }
          sort(b.begin(),b.end());
          
          res=greedy(b,n);    
          printf("%d\n",res);
 
          b.erase(b.begin(),b.begin()+n);
    
    }
    return 0;
}


