#include<stdio.h>
#include<string.h>
int main()
{
  int t=10;
  while(t--)
  {
     int total[105]={0},extra[105]={0},sum[105]={0},diff[105]={0},quoklaudia[105]={0},quonatalia[105]={0};
     char tmptotal[105],tmpextra[105];
     int i,j,k;
     scanf("%s",tmptotal);
     scanf("%s",tmpextra);
     int lentot=strlen(tmptotal);
     int lenext=strlen(tmpextra);
     for(i=0;i<lentot;++i)
     total[i]=(int)tmptotal[i]-48;
     for(i=0;i<lenext;++i)
     extra[i]=(int)tmpextra[i]-48;
     int carry=0;
     for(i=lentot-1,j=lenext-1,k=lentot;i>=0;--k,--i)
     {   if(j>=0)
         {
           sum[k]+=carry;
           sum[k]+=total[i]+extra[j];
           --j;
           if(sum[k]>9)
          {
           carry=sum[k]/10;
           sum[k]=sum[k]%10;
          }
          else
          carry=0;
         }
         else
         {
             sum[k]+=carry;
             sum[k]+=total[i];
             if(sum[k]>9)
             {
                 carry=sum[k]/10;
                 sum[k]=sum[k]%10;
             }
             else
             carry=0;
         }
    }
     sum[k]+=carry;
       for(i=lentot-1,j=lenext-1,k=lentot-1;i>=0;)
       {
           if(j>=0)
           {

               if(total[i]>=extra[j])
               {
                   diff[k]=total[i]-extra[j];
                   --i;
                   --j;
                   --k;
               }
               else
               {   if(total[i]==-1)
                   {
                       total[i]+=10;
                       diff[k]=total[i]-extra[j];
                       --total[i-1];
                   }
                   else
                   {
                       diff[k]=total[i]-extra[j]+10;
                      --total[i-1];
                      --i;
                      --j;
                      --k;
                   }
               }
           }
           else
           {   if(total[i]==-1)
               {
                   diff[k]=total[i]+10;
                   --total[i-1];
               }
               else
                diff[k]=total[i];
               --i;
               --k;
           }
       }

    int rem=0;
    for(i=0,k=0;i<=lentot;++i,++k)
    {
        quoklaudia[k]=(rem*10+sum[i])/2;
        rem=sum[i]%2;
    }
    rem=0;
    for(i=0,k=0;i<lentot;++i,++k)
    {
        quonatalia[k]=(rem*10+diff[i])/2;
        rem=diff[i]%2;
    }
    int  count=0;
    for(i=0;i<=lentot;++i)
    {
        if(quoklaudia[i]==0&&count==0)
            continue;
        else
        {
            count++;
            printf("%d",quoklaudia[i]);
        }
    }
    printf("\n");
    count=0;
     for(i=0;i<lentot;++i)
    {
        if(quonatalia[i]==0&&count==0)
            continue;
        else
        {
            count++;
            printf("%d",quonatalia[i]);
        }
    }
    printf("\n");
 }
 return 0;
}
