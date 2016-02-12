#include<bits/stdc++.h>
int main(){

    int n,a[105],i,j,k,len;
    char store[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},str[10000];
    scanf("%d",&n);
    for(i=0;i<n;++i){
         scanf("%d",&a[i]);
    }
     i=0;
    while(1){

         scanf("%s",str);
         len=strlen(str);
         if(str[0]=='-'&&str[1]=='1')
              break;
         if(i==n) i=0;            
         for(j=0;j<len;++j){
                      k=(str[j]-97+a[i++])%26;
                      str[j]=store[k];      
         }
         printf("%s\n",str);
    }
    return 0;

}
