#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
 
        int n,i,len,count=0,track[30]={0};
        scanf("%d",&n);
        char s[2000000];
        scanf("%s",s);
        len=2*n-2;
        bool check;
        for(i=0;i<len;i++){

             if((i&1)==0){
              
                    if(s[i]!=tolower(s[i+1])){
                        track[s[i]-97]++;
                        check=false;
                    }
                    else{

                        check=true;
                    }
             }
             else{         
             
                 if(check==false){

                       if(track[tolower(s[i])-97]==0)
                            ++count;
                       else
                           track[tolower(s[i])-97]-=1;
                 }
                           
             }
        }
        printf("%d\n",count);
 
    }
    return 0;
}
