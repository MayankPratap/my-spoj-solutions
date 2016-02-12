#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<cmath>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;
int a[1000005];
using namespace std;

int main(){

    int n,i,k,largest,j;
    scanf("%d",&n);
    for(i=0;i<n;++i)
         scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<=n-k;++i){
   
         largest=a[i];
         for(j=i+1;j<i+k;++j){     
             
              if(a[j]>largest)
                   largest=a[j];
           
         }
         if(i==(n-k))
             printf("%d\n",largest);
         else
             printf("%d ",largest);

    }

    return 0;

}

