#include<bits/stdc++.h>
#define N 100005

long long tree[4*N];
long long lazy[4*N];

void update_tree(int node,int a, int b, int i, int j,long long int val){
 
   if(lazy[node]!=0){
 
          tree[node]+=(b-a+1)*lazy[node];
          if(a!=b){

               lazy[node*2]+=lazy[node];
               lazy[node*2+1]+=lazy[node];

          }
          lazy[node]=0;

   }

   if(a>b||a>j||b<i)
       return;
   if(a>=i&&b<=j){

         tree[node]+=(b-a+1)*val;
         if(a!=b){

             lazy[node*2]+=val;
             lazy[node*2+1]+=val;

         }
         return;
          
    }
    update_tree(node*2,a,(a+b)/2,i,j,val);
    update_tree(node*2+1,(a+b)/2+1,b,i,j,val);
   tree[node]=tree[node*2]+tree[node*2+1];

}
long long query_tree(int node,int a,int b,int i, int j){

     if(a > b || a > j || b < i) return 0;
     if(lazy[node]!=0){

          tree[node]+=(b-a+1)*lazy[node];
          if(a!=b){

               lazy[node*2]+=lazy[node];
               lazy[node*2+1]+=lazy[node];
          }
             
          lazy[node]=0;
     }
     if(a>=i&&b<=j)
         return tree[node];
     long long q1=query_tree(node*2,a,(a+b)/2,i,j);
     long long q2=query_tree(node*2+1,1+(a+b)/2,b,i,j);
     
     return q1+q2;

}
void treeandlazy(){

    
    for(int i=1;i<=4*N;++i){

        tree[i]=0;
        lazy[i]=0;

    }
     
    
} 

int main(){

   long long int t;
   scanf("%lld",&t);
   while(t--){

         int n,c,i,p,q,check;
         long long v;
         scanf("%d %d",&n,&c);
        
         treeandlazy();  
         
         for(i=1;i<=c;++i) {

             scanf("%d",&check);
             if(check==0){

                  scanf("%d%d%lld",&p,&q,&v);
                  update_tree(1,1,n,p,q,v);
              
             }        
            else{

                 scanf("%d%d",&p,&q);
                 printf("%lld\n",query_tree(1,1,n,p,q));
             }
              
         }  

       

   }
    return 0;

}
