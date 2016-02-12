#include<stdio.h>
#include<map>
using namespace std;
int main(){

    map<int,int> m;
    map<int,int>::iterator p;
    int t,n,temp,i,max,num;
    bool check;
    scanf("%d",&t);
    while(t--){

        m.clear();
        check=false;
        scanf("%d",&n);
        for(i=0;i<n;++i){

            scanf("%d",&temp);
            p=m.find(temp);
            if(p!=m.end()){
              
                p->second++;

            }
            else m.insert(pair<int,int>(temp,1));

        }
        
        p=m.begin();
        max=p->second;
        num=p->first;
        p++;
        while(p!=m.end()){
             
            if(p->second>max){

                 max=p->second;
                 num=p->first;
                 check=true;
            }
            else if(p->second==max){

                 check=false;
                 break;
            }
            p++;
        }
        if(max>n/2) check=true;
        if(check==true) printf("YES %d\n",num);
        else printf("NO\n");
  
    }
    return 0;

}
