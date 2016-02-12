#include<bits/stdc++.h>
int main(){

   int t;
   scanf("%d",&t);
   while(t--){

      char s[15],revs[15];
      scanf("%s",s);
      int i,len=strlen(s),count=0;
      for(i=0;i<len;++i){
 
          revs[len-i-1]=s[i];
      }
      for(i=0;i<len;++i)
           if(s[i]==revs[i]) ++count;
      if(count==len) printf("YES\n");
      else printf("NO\n");
   }

   return 0;

}
