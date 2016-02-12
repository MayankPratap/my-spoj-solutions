#include<bits/stdc++.h>
using namespace std;
#define INF 100000000

int main(){

    while(1){

        set<double> s;
        int n,j;
        scanf("%d",&n);
        if(n==0)
           break;
        int i,x[300],y[300];
        for(i=0;i<n;++i){

             scanf("%d %d",&x[i],&y[i]);
        }
        double slope;
        for(i=0;i<n-1;++i){
          
            for(j=i+1;j<n;++j){

 
                  if((x[j]-x[i])!=0)
                    slope=(double)(y[j]-y[i])/(double)(x[j]-x[i]);  
                  else
                    slope=INF;
                  s.insert(slope);
                    
            }

        }
        int lines=int(s.size());
        printf("%d\n",lines); 
    }
    return 0;
}
