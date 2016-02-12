#include<stdio.h>
#include<string.h>
int main()
{ char str[110];
  while((scanf("%s",str))==1)
  { if(!strcmp(str,"1"))
    {
        printf("1\n");
    }
    else if(!strcmp(str,"0"))
    {
        printf("0\n");
    }
    else
    {


      int len=strlen(str),i,j;
      int digits[110]={0},tmp[110]={0};
      for(i=0,j=0;i<len;++i,++j)
     {
      digits[j]=(int)str[i]-48;
     }
      for(i=0,j=110-len;i<len;++i,++j)
     {
        tmp[j]=digits[i];

     }
      int mult,carry=0;
       for(j=109;j>=0;--j)
      {
        mult=tmp[j]*2;
        mult+=carry;
        tmp[j]=mult%10;
        carry=mult/10;
      }
       int flag=0;
       tmp[109]=tmp[109]-2;
       if(tmp[109]<0)
       {
           for(j=109;j>=0;--j)
         {
            if(tmp[j]<0)
            {
                tmp[j]+=10;
                --tmp[j-1];
            }
         }
       }
       for(j=0;j<110;++j)
       {
           if(tmp[j]==0&&flag==0)
            continue;
           ++flag;
           printf("%d",tmp[j]);
       }
       printf("\n");
    }
   /* for(i=109-len;i<=109;++i)
        printf("%d",digits[i]);
    printf("\n");   */
  }
  return 0;
}
