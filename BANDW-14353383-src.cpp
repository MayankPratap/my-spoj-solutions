#include<bits/stdc++.h>
int main(){
    
    char s1[505],s2[505];
    while(1){

        scanf("%s %s",s1,s2);
            
        if(s1[0]=='*' &&s2[0]=='*') break;
   
        int len=strlen(s1),i,count=0,flag=0;
   
        for(i=0;i<len;++i){

            if(s1[i]!=s2[i]){

                ++count;
                
            }
            else{
                if(count!=0){
                    count=0;
                    ++flag;
                }
            }

        }
        if(count!=0) ++flag;
        printf("%d\n",flag);

    }

    return 0;

}
