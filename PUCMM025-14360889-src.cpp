#include<bits/stdc++.h>
int main(){
  
    char s[250];
    while((scanf("%s",s))!=EOF){ 

        
        int i,len=strlen(s),digsum=0,lastdig=(int)s[len-1]-48,sum7=0,num,num8;
        for(i=0;i<len;++i)
            digsum+=(int)s[i]-48;
        if(len>=2){
             num=10*((int)s[len-2]-48)+(int)s[len-1]-48,sum7=0;
        }
        else num=4;
        if(len>=3){
              num8=100*((int)s[len-3]-48)+10*((int)s[len-2]-48)+(int)s[len-1]-48;
        }
        else if(len==2){
             num8=10*((int)s[len-2]-48)+(int)s[len-1]-48;
        }
        else{

            num8=8;

        }
        for(i=len-1;i>=0;--i){
 
             int b=len-1-i;
             if(b%6==0) sum7+=((int)s[i]-48)*1;
             else if(b%6==1) sum7+=((int)s[i]-48)*3;
             else if(b%6==2) sum7+=((int)s[i]-48)*2;
             else if(b%6==3) sum7+=((int)s[i]-48)*6;
             else if(b%6==4) sum7+=((int)s[i]-48)*4;
             else if(b%6==5) sum7+=((int)s[i]-48)*5;
        }
        int count=0;
        for(i=0;i<len;++i){
         
            int c=(int)s[i]-48;
            if(c==1) ++count;
            else if(c==2){
             
                if(lastdig%2==0)
                   ++count;
            } 
            else if(c==3){
                if(digsum%3==0) ++count;
            }
            else if(c==4){
                if(num%4==0) ++count;

            }
            else if(c==5){
                if(lastdig%5==0) ++count;
            } 
            else if(c==6){

                if(lastdig%2==0&&digsum%3==0) ++count;

            }
            else if(c==7){
                if(sum7%7==0) ++count;

            }  
            else if(c==8){
                if(num8%8==0) ++count;
               

            }
            else if(c==9){

                if(digsum%9==0) ++count;

            }
        }
        printf("%d\n",count);
    }
    return  0;
}
