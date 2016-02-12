#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
map<long long,int> M;
map<long long,int> :: iterator it;


int main(){

    int homo=0,hetero=0,n,i,cunt=0;
    long long num;
    homo=0;
    hetero=0;
    char str[20];  
    scanf("%d",&n);  
    for(i=1;i<=n;++i){

         scanf("%s %lld",str,&num);
         if(str[0]=='i'){

               M[num]++;
               cunt++;
               
             
               if(M[num]==2){
                  
                   homo++;
                     
               }
               else if(M[num]==1){
                     
                     if(cunt>M[num])
                         hetero++;
               }
             //  printf("%d %d\n",homo,hetero);
              
         }
         else{
              if(M[num]!=0&&cunt!=0){
                   M[num]--;
                   cunt--;
                 
                   if(M[num]==1){
                       
                        homo--;
                     
                   }
                   else if(M[num]==0&&cunt!=0){
                    
                       hetero--;

                  }  
                  
                  
            }
         }
         if(cunt==1||cunt==0)
             printf("neither\n");
         
         else if(hetero!=0&&homo==0)
              printf("hetero\n");
         else if(homo!=0&&hetero==0)
              printf("homo\n");
         else if(homo!=0&&hetero!=0)
             printf("both\n");
              
              
    }
    return 0;
}
