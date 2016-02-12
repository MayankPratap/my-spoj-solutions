#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

struct trie{

    int next[26];
    int flag;

}node[100000];

int allocated,tag;

void insert(string s){

    int current=0;

    for(int i=0;i<s.length();++i){

        if(node[current].next[s[i]-'0']==0){

            node[current].next[s[i]-'0']=allocated;
            current=allocated;
            allocated++;

        }

        else{
             current=node[current].next[s[i]-'0'];
             if(node[current].flag==1){
                 tag=1;
             }
        } 

        if(i==s.length()-1)
        	  node[current].flag=1;

    }

    

}



int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        string str;

        allocated=1,tag=0;

        memset(node,0,sizeof(node));

        vector<string>v; 

        for(int i=1;i<=n;++i){

            cin>>str;
            v.pb(str);

        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();++i){

            insert(v[i]);

        }

        if(tag==0)
           printf("YES\n");

        else
           printf("NO\n");

    }

	return 0;
}