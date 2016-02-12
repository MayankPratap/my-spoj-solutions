#include<stdio.h>
#include<math.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int s1,s2,p,i,relvel;
scanf("%d %d",&s1,&s2);
relvel=s1-s2;
if(s1-s2<0)
    relvel=s2-s1;
if(s1>0)
    p=s1;
else
    p=s2;
    int count=0;
    for(i=1;;++i)
    {
            if(((2*i*p)/relvel)%2==0&&(2*i*p)/relvel!=0&&(2*i*p)%relvel==0)
                break;
            else
                ++count;
    }
    ++count;
    printf("%d\n",count);
}
return 0;
}