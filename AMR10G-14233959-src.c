#include<stdio.h>
#include<stdlib.h>
void merge(long long int l[],long long int r[],long long int a[],int nl,int nr)
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
void mergesort(long long int *a,int n)
{ if(n<2)
  return;
  int mid=n/2;
  long long int *left,*right;
  left=(long long int*)malloc(mid*sizeof(long long int));
  right=(long long int*)malloc((n-mid)*sizeof(long long int));
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
     int n,k,i;
     scanf("%d %d",&n,&k);
     long long int arr[20005];
     for(i=0;i<n;++i)
     scanf("%lld",&arr[i]);
     mergesort(arr,n);
     long long int mindiff=1000000000,tmp;
     if(k==1)
        printf("0\n");
     else if(n==k)
        printf("%lld\n",arr[n-1]-arr[0]);
     else
     {

          for(i=0;i<=n-k;++i)
         {
          tmp=arr[i+k-1]-arr[i];
          if(tmp<mindiff)
          mindiff=tmp;
         }
         printf("%lld\n",mindiff);
      }
  }
  return 0;
}
