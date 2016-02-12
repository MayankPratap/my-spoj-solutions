#include<bits/stdc++.h>
using namespace std;

int i,temp[10000];

int search(int arr[],int x,int n){
 
     for(int j=0;j<n;++j)
         if(arr[j]==x)
            return j;  

     return -1;
}

//Prints postorder traversal from given inorder and preorder traversals

void postOrder(int in[],int pre[],int n){

    //The first element in pre[] is always root,search it in in[] to find left and right subtress

    int root=search(in,pre[0],n);


    //If left subtree is not empty,print left subtree

    if(root!=0)
       postOrder(in,pre+1,root);

    if(root!=n-1)
       postOrder(in+root+1,pre+root+1,n-root-1);

    temp[i++]=pre[0];

}


int main(){

     

     int n,pre[10000],post[10000],in[10000],j,flag=0;
     scanf("%d",&n);

     i=0;    

     for(j=0;j<n;++j)
          scanf("%d",&pre[j]);

     for(j=0;j<n;++j)
          scanf("%d",&post[j]);

     for(j=0;j<n;++j)
          scanf("%d",&in[j]);
   
     postOrder(in,pre,n);

     for(j=0;j<n;++j){
   
           if(temp[j]!=post[j]){
              flag=-1;
              break;
           }
         
     }

     if(flag==-1)
         printf("no\n");
     else
         printf("yes\n");


 
     return 0;
}
