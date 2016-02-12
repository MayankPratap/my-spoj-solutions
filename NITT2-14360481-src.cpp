#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    scanf("%d",&t);
    while(t--){

        char s[50005];
        scanf("%s",s);
        int i,len=strlen(s),cunt=0,count=0;
        long long sum7=0,sum9=0;
        for(i=len-1;i>=0;--i){
            int b=len-1-i;
            if(b%6==0) sum7+=((int)s[i]-48)*1;
            else if(b%6==1) sum7+=((int)s[i]-48)*3;
            else if(b%6==2) sum7+=((int)s[i]-48)*2;
            else if(b%6==3) sum7+=((int)s[i]-48)*6;
            else if(b%6==4) sum7+=((int)s[i]-48)*4;
            else if(b%6==5) sum7+=((int)s[i]-48)*5;
            
            sum9+=(int)s[i]-48;
        } 
        int flag=0,tag=0;
        if(sum7%7==0){                 
             ++flag;
             ++tag;
        }
        
        if(sum9%9==0) ++flag;
        if(sum9%3==0) ++tag;
        int num=10*((int)s[len-2]-48)+(int)s[len-1]-48;
        if(num%4==0) ++flag;
        if(num==0||num==25||num==50||num==75) ++tag;
        if(flag==3&&tag==3) printf("Yes Yes\n");
        else if(flag==3&&tag!=3) printf("Yes No\n");
        else if(flag!=3&&tag==3) printf("No Yes\n");
        else printf("No No\n");
    }

    return 0;
}
