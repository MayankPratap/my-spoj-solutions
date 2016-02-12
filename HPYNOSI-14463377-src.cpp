#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<list>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<cctype>
#include<climits>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define GI ({int t; scanf("%d",&t); t;})
#define GF ({double t;scanf("%lf",&t); t;})
#define GLL ({LL t; scanf("%lld",&t); t;})
#define loop(i,a,b) for(int i=a;i<b;++i)
#define forall(v) (v).begin(),(v).end()
#define pb push_back
#define INF (int)1e9
#define EPS (double)(1e-9)
#define PI (3.141592653589793)

int breakn(int n){

    int sum=0;
    while(n>0) {

         int b=n%10;
         sum+=b*b;
         n/=10;
    }
    return sum;

}
int hpynosi(int n){

     vi track;
     while(n>1){

         if(find(forall(track),n)==track.end()){

               track.pb(n);
               n=breakn(n);
                
         }
         else
            return -2;
     }
      
     return track.size();
}   

int main(){

    int t,n;
    char arr[50],test[20];
    int pre[1000];
    loop(i,1,1000){

         pre[i]=hpynosi(i);
    }
    t=GI;
    getchar();
    
    loop(i,0,t){

          gets(arr);
          n=atoi(arr); 
          printf("%d\n",pre[breakn(n)]+1);
    }   
    return 0;
}
