#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;
long long int merge(int l[],int r[],int a[],int nl,int nr)
{
    int i=0,j=0,k=0;
    long long inv_count=0;
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
            inv_count+=nl-i;
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
    return inv_count;
}
long long int mergesort(int *a,int n)
{  if(n==1)
      return 0;
  int mid=n/2;
  long long inv_count=0;
  int *left,*right;
  left=(int*)malloc(mid*sizeof(int));
  right=(int*)malloc((n-mid)*sizeof(int));
  int i;
  for(i=0;i<mid;++i)
  left[i]=a[i];
  for(i=mid;i<n;++i)
  right[i-mid]=a[i];
  inv_count+=mergesort(left,mid);
  inv_count+=mergesort(right,n-mid);
  inv_count+=merge(left,right,a,mid,n-mid);  
  return inv_count;
}

int main(){

    int t;
    scanf("%d",&t);
    printf("\n");
    while(t--){

        int n,i,a[210000];
        scanf("%d",&n);
        for(i=0;i<n;++i){
                 scanf("%d",&a[i]);
        }
        printf("\n");
        printf("%lld\n",mergesort(a,n));
        
    } 
    return 0;
}
