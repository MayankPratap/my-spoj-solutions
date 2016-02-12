#include<bits/stdc++.h>
int power(int base,int expo)
{
    if(expo==0)
    return 1;
    int f=power(base,expo/2);
    if((expo&1)==0)
    return f*f;
    return f*f*base;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        char s1[10],s2[10];
        scanf("%s %s",s1,s2);
        int i,len1=strlen(s1),len2=strlen(s2),res1=0,res2=0;
        
        for(i=0;i<len1;){

             if(isdigit(s1[i])){
             
                   if(s1[i+1]=='m')
                         res1+=1000*((int)s1[i]-48);
                   else if(s1[i+1]=='c')
                         res1+=100*((int)s1[i]-48);
                   else if(s1[i+1]=='x')
                         res1+=10*((int)s1[i]-48);
                   else if(s1[i+1]=='i')
                         res1+=((int)s1[i]-48);
                   i+=2;      
            }
            else if(s1[i]=='m'){
                   res1+=1000;
                   ++i;
            }
            else if(s1[i]=='c'){
                   res1+=100;
                   ++i;
            }
            else if(s1[i]=='x'){
                   res1+=10;
                   ++i;
            }
            else if(s1[i]=='i'){
                   res1+=1;
                   ++i;     
            } 
      }
       for(i=0;i<len2;){

            if(isdigit(s2[i])){
             
                   if(s2[i+1]=='m')
                         res2+=1000*((int)s2[i]-48);
                   else if(s2[i+1]=='c')
                         res2+=100*((int)s2[i]-48);
                   else if(s2[i+1]=='x')
                         res2+=10*((int)s2[i]-48);
                   else if(s2[i+1]=='i')
                         res2+=((int)s2[i]-48);
                   i+=2;      
            }
            else if(s2[i]=='m'){
                   res2+=1000;
                   ++i;
            }
            else if(s2[i]=='c'){
                   res2+=100;
                   ++i;
            }
            else if(s2[i]=='x'){
                   res2+=10;
                   ++i;
            }
            else if(s2[i]=='i'){
                   res2+=1;
                   ++i;     
            } 

      }
      
       int sum=res1+res2,k=0,rem,quo,expo=3; 
       char store[20];
       while(sum){

             int po=power(10,expo);             
             rem=sum%po;
             quo=sum/po;
             sum=rem;
             if(quo!=0){
                store[k++]=(char)(quo+48);
                if(expo==3)
                      store[k++]='m';
                else if(expo==2)
                      store[k++]='c';
                else if(expo==1)
                      store[k++]='x';
                else if(expo==0)
                      store[k++]='i';
            }
            expo--;

      }   
        for(i=0;i<k;++i){

            if(store[i]!='1')
                printf("%c",store[i]);

        }
        printf("\n");
     
    }
    return 0;

} 
