#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       int flag=0;
       int n;
       scanf("%d",&n);
       vector<string> vec;
       map<long long,int> mapu;
       for(int i=0;i<n;++i){

            string x;
            cin>>x;
            vec.push_back(x);            
       }

       sort(vec.begin(),vec.end());
       string prev="fuck";
       
       for(int i=0;i<vec.size();++i){

           int len=prev.length();
           string cpy=vec.at(i).substr(0,len);
      
           if(cpy==prev){
 
                cout<<"NO"<<'\n';
                flag=1;
                break;
           }
           prev=vec.at(i);
      }

       if(flag==0){

           cout<<"YES"<<'\n';
       }            
   }
    return 0;

}
