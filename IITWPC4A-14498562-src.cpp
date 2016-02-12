#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cctype>
#include<sstream>

using namespace std;

int main(){

    int t,m,n;
    char s[100005],sub[100005];
    string cs,csub;
    scanf("%d",&t);
    while(t--){

           scanf("%s",s);
           scanf("%d %d",&m,&n);
           long long int len=strlen(s),count=0,i;
           long long int maxlen,minlen;
           for(i=0;i<m;++i)
                sub[i]='a';
           sub[m]='\0';
           string cs=s;
           string csub=sub;
           int pos=cs.find(csub,0);
           while(pos!=string::npos){

                  ++count;
                  cs[pos]='b';
                  pos=cs.find(csub,pos+m);
           }
           if(m==n||count==0){
                 minlen=len;
                 maxlen=len;
           }
           else if(n>m){

                 maxlen=len+(n-m)*count;
                 minlen=len;
           }
           else{
                 maxlen=len;
                 minlen=len-(m-n)*count;
           }          
           printf("%lld %lld\n",minlen,maxlen);
    }
    return 0;

}
