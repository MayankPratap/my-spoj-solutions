#include<bits/stdc++.h>

using namespace std;

long long getMaxArea(long long *hist,long long n){

    stack<long long>s;
    long long max_area=0;
    long long int tp;
    long long area_with_top;
    long long int i=0;
    while(i<n){

           if(s.empty()||hist[s.top()]<=hist[i])
                s.push(i++);
           else{

                tp=s.top();
                s.pop();
                area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);
                if(max_area<area_with_top)
                    max_area=area_with_top;

           }
   }
   while(s.empty()==false){

        tp=s.top();
        s.pop();
        area_with_top=hist[tp]*(s.empty()?i:i-s.top()-1);
        if(max_area<area_with_top)
           max_area=area_with_top;
    
   }
   return max_area;    

}
int main(){

   long long h[100005],check,count,area,max,start;
   long long int i,n;
   while(1){


        scanf("%lld",&n);
        if(n==0)
           break;
        for(i=0;i<n;++i)
            scanf("%lld",&h[i]);
        printf("%lld\n",getMaxArea(h,n));
   }
   return 0;

}
