
//Code of PHONELST using tries 

#include<bits/stdc++.h>
using namespace std;

#define ALPHABETS 10
#define CASE '0'

int flag;

struct Node{

    struct Node *parent;
    struct Node *children[ALPHABETS];
    vector<int> occurrences;

};

void InsertWord(struct Node *trieTree,char *word,int index){

    struct Node * traverse=trieTree;

    while(*word!='\0'){
 
          if(traverse->children[*word-CASE]==NULL){

               traverse->children[*word-CASE]=(struct Node*)calloc(1,sizeof(struct Node));
 
               traverse->children[*word-CASE]->parent=traverse;
 
          }

          traverse=traverse->children[*word-CASE];
          ++word;
 
          if(traverse->occurrences.size()!=0){
                  
                  //leaf node,thus this indicates that we have got prefix of our word already
                  flag=1;

          }
          
          
    }
    traverse->occurrences.push_back(index);
    
    for(int i=0;i<ALPHABETS;++i){
     
          if(traverse->children[i]!=NULL){

                flag=1;

          }

    }

}

int main(){

   int t;
   scanf("%d",&t);
   while(t--){

       flag=0;

       struct Node * trieTree=(struct Node*)calloc(1,sizeof(struct Node));

       int n,i;
     
       char word[100];
  
       scanf("%d",&n);

       for(i=1;i<=n;++i){

            scanf("%s",word);
           
            InsertWord(trieTree,word,i);

       }
       if(flag==1)
           printf("NO\n");

       else
           printf("YES\n");
 
   }
}
