#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1,s2,winner;
    int g1,g2,t,i;
    scanf("%d",&t);
    map<string,int> M;
    map<string,int> :: iterator it;
    scanf("%d",&t);
    while(t--){

            M.clear();
            for(i=0;i<16;++i){
           
                     cin>>s1>>s2>>g1>>g2;
                     if(g1>g2) M[s1]++;
                     else if(g1<g2) M[s2]++;
            }
            int wins=0;
            for(it=M.begin();it!=M.end();it++){
                           
                           if(it->second>wins){
  
                                  wins=it->second;
                                  winner=it->first;
                           }

            }
            cout<<winner<<'\n';

     }

     return 0;

}
