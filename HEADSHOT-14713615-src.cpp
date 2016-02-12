#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[105];
    int i,len=0,shoot=0,rotate=0;
    scanf("%s",str);
    char *p=&str[0];  
    while(*p!='\0'){
         ++len;
         ++p;
    }
  
    for(i=0;i<len-1;++i){

          if(str[i]=='0'){
                        
                if(str[i+1]=='0')
                    ++shoot;
                else
                    ++rotate;             
          }
    }
     if(str[len-1]=='0'){

            if(str[0]=='0')
                ++shoot;
            else
                ++rotate;
     }
     
     if(shoot==rotate || shoot==len)
          printf("EQUAL\n");
     else if(shoot>rotate)
          printf("SHOOT\n");
     else
          printf("ROTATE\n");          

    return 0;

}
