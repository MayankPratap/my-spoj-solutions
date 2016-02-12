#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     int n;
     scanf("%d",&n);
     char str[45];
     scanf("\n%[^\n]s",str);
     int len=strlen(str);
     int i,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0;
     for(i=0;i<len-2;++i)
     {
        if(str[i]=='H')
        {
            if(str[i+1]=='H'&&str[i+2]=='H')
            count8++;
            else if(str[i+1]=='H'&&str[i+2]=='T')
            count7++;
            else if(str[i+1]=='T'&&str[i+2]=='H')
            count6++;
            else
            count5++;
        }
        else
        {
            if(str[i+1]=='H'&&str[i+2]=='H')
            count4++;
            else if(str[i+1]=='H'&&str[i+2]=='T')
            count3++;
            else if(str[i+1]=='T'&&str[i+2]=='H')
            count2++;
            else
            count1++;
        }
     }
     printf("%d %d %d %d %d %d %d %d %d ",n,count1,count2,count3,count4,count5,count6,count7,count8);
     printf("\n");

  }
  return 0;
}
