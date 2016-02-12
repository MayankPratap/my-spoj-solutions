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
int mergesort(int *a,int n)
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
  int t,j,k;
  scanf("%d",&t);
  for(k=1;k<=t;++k)
  {
     int m,n,sum=0;
     scanf("%d %d",&m,&n);
     int arr[1005];
     for(j=0;j<n;++j)
     {  if(j==n-1)
        scanf("%d",&arr[j]);
        else
        scanf("%d ",&arr[j]);
     }
     mergesort(arr,n);
     int count=0;
     printf("Scenario #%d:\n",k);
     for(j=n-1;j>=0;--j)
     {
        sum+=arr[j];
        if(sum>=m)
        {
          printf("%d\n",count+1);
          break;
        }
        else
        ++count;
     }
     if(count==n)
     printf("impossible\n");
     printf("\n");
  }
  return 0;
}
