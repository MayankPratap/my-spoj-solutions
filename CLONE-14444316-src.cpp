#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    int n,m,i;
    map<string,int> M;
    map<string,int> :: iterator it;
    while(1){
        M.clear();
        int track[20005]={0};       
        scanf("%d%d",&n,&m);
        if(n==0&&m==0) break;
        string x;
        for(i=0;i<n;++i){

             cin>>x;
             M[x]++;
        }
        for(it=M.begin(),i=0;it!=M.end();it++,++i)
               track[it->second]++;              
        for(i=1;i<=n;++i)        
            printf("%d\n",track[i]);
    }
    return 0;

}
