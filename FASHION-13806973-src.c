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
{
  if(n<2)
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
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int men[1005],women[1005];
    int i;
    for(i=0;i<n;++i)
    {  if(i==n-1)
       scanf("%d",&men[i]);
       else
       scanf("%d ",&men[i]);
    }
    for(i=0;i<n;++i)
    {  if(i==n-1)
       scanf("%d",&women[i]);
       else
       scanf("%d ",&women[i]);
    }
    mergesort(men,n);
    mergesort(women,n);
    int sum=0;
    for(i=0;i<n;++i)
     sum+=men[i]*women[i];
    printf("%d\n",sum);

  }
  return 0;
}
