#include<stdio.h>
void tshow1(unsigned long long int d)
{
    if(d==1)
    printf("5");
    else if(d==2)
    printf("6");
    else
    {
        int e=d%2;
        tshow1((d-1)/2);
        if(e==1)
        printf("5");
        else if(e==0)
        printf("6");
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
       tshow1(n);
       printf("\n");
    }
    return 0;
}
