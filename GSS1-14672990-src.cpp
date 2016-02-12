#include<bits/stdc++.h>
using namespace std;

#define INT -1000000
int k;

struct node{

     int sum,pre,suf,result; 
     void split(node &a,node &b){}
     void merge(node a,node b){

          sum=a.sum+b.sum;
          pre=max(a.pre,(a.sum+b.pre));
          suf=max(b.suf,(b.sum+a.suf));
          result=max(a.suf+b.pre,max(a.result,b.result));
     }
     node(){

          
           result=pre=suf=sum=INT;
         
     }
     node(int temp){


           result=pre=suf=sum=temp;
    
     }
 
}tree[400005];

void update(int pos){

     pos=pos/2;
     while(pos!=0){

          tree[pos].merge(tree[pos*2],tree[pos*2+1]);
          pos=pos/2;

     }
}

node range_query(int root,int l,int r,int i,int j){

     if(l>=i&&r<=j)
         return tree[root];
               
     tree[root].split(tree[root*2],tree[root*2+1]);
  
     node lnode,rnode;
    
     if(i<=(l+r)/2)
          lnode=range_query(root*2,l,(l+r)/2,i,j);

     if(j>(l+r)/2)
          rnode=range_query(root*2+1,(l+r)/2+1,r,i,j);

     tree[root].merge(tree[root*2],tree[root*2+1]);
  
     node temp;
     temp.merge(lnode,rnode);

     return temp;
}
int main(){

      int n,temp,l,r,c;
      scanf("%d",&n);
      k=ceil(log(n)/log(2));
      int pos=(1<<k);
      for(int i=0;i<n;++i){

           scanf("%d",&temp);
           tree[pos+i]=node(temp);
           update(pos+i);         
      }
      int m;
      scanf("%d",&m);
      while(m--){

           
           scanf("%d%d",&l,&r);
  
               printf("%d\n",(range_query(1,1,pos,l,r)).result);
           
      }
     return 0;
}

