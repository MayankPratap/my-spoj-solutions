#include<bits/stdc++.h>
#include<ctype.h>
#include<cstring>
char str[100005],alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},alphacaps[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int key,i;
        scanf("%d",&key);
        scanf("%s",str);
        int len=strlen(str);
        if(key<=25){ 

            for(i=0;i<len;++i)
          
                if(str[i]=='.')
                    str[i]=' ';
                else if(str[i]>=97&&str[i]<=122){

                    int index=(str[i]-97+key)%26;
                    str[i]=alpha[index];
                }
                else{

                    int index=(str[i]-65+key)%26;
                    str[i]=alphacaps[index];
                }

        }
        else{

            for(i=0;i<len;++i){

                if(str[i]=='.')
                    str[i]=' ';
                else if(str[i]>=97&&str[i]<=122){
                    int index=(str[i]-97+key)%26;
                    str[i]=alphacaps[index];

                }
                else{
                    int index=(str[i]-65+key)%26;
                    str[i]=alpha[index];

                }


            }
 
        }
        printf("%s\n",str);

    }

    return 0;

}
