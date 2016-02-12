#include<bits/stdc++.h>
using namespace std;

int a[100005];
struct node{

    int val;
    int index;

};

struct node seg[400005],noob;

void construct(int node,int start,int end){

     if(start==end){

          seg[node].val=a[start];
          seg[node].index=start;
        
                      
          return;
     }

     int mid=((start+end)>>1);

     construct(node*2,start,mid);
     construct(node*2+1,mid+1,end);
 
     if(seg[node*2].val<=seg[node*2+1].val){

          seg[node].val=seg[node*2+1].val;
          seg[node].index=seg[node*2+1].index;
        
          
     }
     else{
 
          seg[node].val=seg[node*2].val;
          seg[node].index=seg[node*2].index;
         
     }

   

} 

struct node rangeMaxQuery(int node,int start,int end,int left,int right){

     if(start>end || start>right || end<left)
           return noob;

     if(start>=left && end<=right)
           return seg[node];

     int mid=(start+end)/2;

      struct node res1=rangeMaxQuery(node*2,start,mid,left,right);

      struct node res2=rangeMaxQuery(node*2+1,mid+1,end,left,right);

     if(res1.val>=res2.val)
          return res1;

     else
         return res2;
}

void update(int node,int start,int end,int pos,int val){

      int mid=(start+end)/2;

      if(pos<=mid){

             if(start==end && start==pos){
            
                   seg[node].val=val;
                   return;
             }
  
             update(node*2,start,mid,pos,val);

      }
    
      else{

           if(start==end && start==pos){
 
                 seg[node].val=val;
                 return;
           }

           update(node*2+1,mid+1,end,pos,val);
     }
     
      if(seg[node*2].val>=seg[node*2+1].val){

             seg[node].val=seg[node*2].val;
             seg[node].index=seg[node*2].index;
     
      } 
      else{

            seg[node].val=seg[node*2+1].val;
            seg[node].index=seg[node*2+1].index ;                     

      }
}
int main(){

   int n,i,q,l,r,ind,j;
   int max1,max2,max3;
   char str[3];
   scanf("%d",&n);

   noob.val=-1;
   noob.index=-1;

   for(i=1;i<=n;++i)
      scanf("%d",&a[i]);

   construct(1,1,n);

   scanf("%d",&q);

   for(i=0;i<q;++i){

      scanf("%s %d %d",str,&l,&r);
      // printf("%s\n",str);
   /*   for(j=1;j<=9;j++)
         printf("%d ",seg[j].val);
      printf("\n");
      for(j=1;j<=9;j++)
         printf("%d ",seg[j].index);
      printf("\n");

    */ 
      if(str[0]=='Q'){

            struct node temp=rangeMaxQuery(1,1,n,l,r);
          //  printf("%d %d\n",temp.val,temp.index);

            max1=temp.val;        
            ind=temp.index;  
       // printf("%d\n",temp.index);                       
     //    printf("%d %d\n",ind,max1);
           
            update(1,1,n,ind,-1);
        /*   for(j=1;j<=9;j++)
	      printf("%d ",seg[j].val);
 	   printf("\n");

           for(j=1;j<=9;j++)
	     printf("%d ",seg[j].index);
             printf("\n\n");
        */
 
            temp=rangeMaxQuery(1,1,n,l,r);
         //   printf("%d %d\n",temp.val,temp.index);
            max2=temp.val;           
            update(1,1,n,ind,max1);
         /*    for(j=1;j<=9;j++)
	      printf("%d ",seg[j].val);
 	   printf("\n");

         

           for(j=1;j<=9;j++)
	     printf("%d ",seg[j].index);
             printf("\n\n"); 

         */
           printf("%d\n",max1+max2);
       
       }
       else{

            update(1,1,n,l,r);
         /*   for(j=1;j<=9;j++)
	      printf("%d ",seg[j].val);
 	    printf("\n");

          

            for(j=1;j<=9;j++)
	     printf("%d ",seg[j].index);
            printf("\n\n");  
                   */
       }

   }

   return 0;
}
