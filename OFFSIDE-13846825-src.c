#include<stdio.h>
#include<stdlib.h>
void merge(int l[],int r[],int a[],int nl,int nr)
{
    int i=0,j=0,k=0;
    while(i<nl&&j<nr)
    {
        if(l[i]<r[j])
        {
            a[k]=l[i];
            k+=1;
            i+=1;
        }
        else if(r[j]<l[i])
        {
            a[k]=r[j];
            k+=1;
            j+=1;
        }
        else
        {
            a[k]=r[j];
            a[k+1]=l[i];
            k+=2;
            ++i;
            ++j;
        }
    }
    while(i<nl)
    {
        a[k]=l[i];
        k+=1;
        i+=1;
    }
    while(j<nr)
    {
       a[k]=r[j];
       k+=1;
       j+=1;
    }
}
void mergesort(int *a,int n)
{ if(n<2)
  return;
  int mid=n/2;
  int *left,*right;
  left=(int*)malloc(mid*sizeof(int));
  right=(int*)malloc((n-mid)*sizeof(int));
  int i;
  for(i=0;i<mid;++i)
  left[i]=a[i];
  for(i=mid;i<n;++i)
  right[i-mid]=a[i];
  mergesort(left,mid);
  mergesort(right,n-mid);
  merge(left,right,a,mid,n-mid);
}
int main()
{

   while(1)
   {   int nattackers,ndefenders;
       scanf("%d %d",&nattackers,&ndefenders);
       if(nattackers==0&&ndefenders==0)
        break;
       int a[15],b[15],i;
       for(i=0;i<nattackers;++i)
       {
          if(i==nattackers-1)
          scanf("%d",&a[i]);
          else
          scanf("%d ",&a[i]);
       }
       for(i=0;i<ndefenders;++i)
       {
          if(i==ndefenders-1)
          scanf("%d",&b[i]);
          else
          scanf("%d ",&b[i]);
       }
       mergesort(a,nattackers);
       mergesort(b,ndefenders);
       int count=0,flag=0;
       for(i=0;i<ndefenders;++i)
       {
           if(b[i]<=a[0])
            ++count;
            if(count>=2)
            {
                ++flag;
                break;
            }
       }
       if(flag)
        printf("N\n");
       else
        printf("Y\n");
   }
  return 0;
}
