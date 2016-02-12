#include<stdio.h>
#include<string.h>
int main()
{
    char str[1005];
    while(scanf("%s",str)==1)
    {
        int i,j,count=0,flag=0,arr1[1005],arr2[1005],arr3[1005],len=strlen(str);
        arr2[0]=1;
        arr3[0]=0;
        for(i=1;i<len;++i)
        {
           if(arr2[i-1]==1)
           {
              arr2[i]=0;
              arr3[i]=1;
           }
           else
           {
              arr2[i]=1;
              arr3[i]=0;
           }
         }
         for(i=0;i<len;++i)
         {
            if(isupper(str[i]))
            arr1[i]=1;
            else
            arr1[i]=0;
         }
         for(i=0;i<len;++i)
         {
             if(arr1[i]!=arr2[i])
             ++count;
             else if(arr1[i]!=arr3[i])
             ++flag;

         }
         if(count<=flag)
         printf("%d\n",count);
         else
         printf("%d\n",flag);
}
return 0;
}
