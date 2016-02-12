#include<bits/stdc++.h>
char tellcolor(int y,long long int pos){

    if(y==0&&pos==0) return 'r';
    
    long long int pospar=pos>>1;
    
    char color=tellcolor(y-1,pospar);

    if(pos==2*pospar){
    
        if(color=='r')
            return 'b'; 
        else
            return 'r';     
  
    }
    else{

        if(color=='r')
            return 'r';
        else
            return 'b';

    }
    

}
int main(){

    int y;
    long long int pos;
    scanf("%d %lld",&y,&pos);
    if(tellcolor(y,pos)=='r')
        printf("red\n");
    else
        printf("blue\n");
    return 0;

}
