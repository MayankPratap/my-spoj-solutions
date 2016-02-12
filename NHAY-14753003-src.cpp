#include<bits/stdc++.h>
using namespace std;

int main(){

     int m,i,j;
     string pat;
     string txt;
     while(scanf("%d",&m)!=EOF){

          cin>>pat;
          cin>>txt;
          int pos=txt.find(pat,0),count=0;
          while(pos!=string::npos){

               printf("%d\n",pos);
               ++count;
               pos=txt.find(pat,pos+1);

          }
          if(count==0)
             printf("\n\n");

     }
    return 0;

}
