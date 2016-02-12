#include<stdio.h>
void mankuword(unsigned long long int d)
{
    if(d==1)
    printf("m");
    else if(d==2)
    printf("a");
    else if(d==3)
    printf("n");
    else if(d==4)
    printf("k");
    else if(d==5)
    printf("u");
    else
    {
        int e=d%5;
        mankuword((d-1)/5);
        if(e==1)
        printf("m");
        else if(e==2)
        printf("a");
        else if(e==3)
        printf("n");
        else if(e==4)
        printf("k");
        else if(e==0)
        printf("u");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       unsigned long long int n;
       scanf("%llu",&n);
       mankuword(n);
       printf("\n");
    }
    return 0;
}
