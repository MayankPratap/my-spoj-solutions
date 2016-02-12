#include<bits/stdc++.h>
using namespace std;

#define ALPHABETS 26
#define CASE 'a'

struct Node{

   struct Node * children[ALPHABETS];
   bool wordEnding;

};

void InsertWord(struct Node * trieTree,char * word){

    struct Node * traverse=trieTree;

    while(*word!='\0'){
 
         if(traverse->children[*word-CASE]==NULL){

               traverse->children[*word-CASE]=(struct Node*)calloc(1,sizeof(struct Node));

              // traverse->children[*word-CASE]->parent=traverse;

         }

         traverse=traverse->children[*word-CASE];
                  
         ++word; //The next alphabet

    }

    traverse->wordEnding=true;  //To denote the end of word

}

struct Node *SearchWord(struct Node *treeNode,char *word){

     while(*word!='\0'){

           if(treeNode->children[*word-CASE]!=NULL){

                 treeNode=treeNode->children[*word-CASE];
                 ++word;                
           }
           else
                 break;

     }
     
     if(*word=='\0')
             return treeNode;

     else
             return NULL;
  
}

void LexicographicalPrint(struct Node * trieTree,vector<char> word,char *prefix){

     int i;
 
     bool noChild=true; 

     if(trieTree->wordEnding && word.size()!=0){

           vector<char>::iterator charItr=word.begin();
           
           printf("%s",prefix);

           while(charItr!=word.end()){

                printf("%c",*charItr);
                ++charItr;

           }
                       
           printf("\n");
    }

    for(i=0;i<ALPHABETS;++i){
 
         if(trieTree->children[i]!=NULL){

               noChild=false;
               word.push_back(CASE+i); 

               LexicographicalPrint(trieTree->children[i],word,prefix);
               word.pop_back();
 
         } 

    }

    word.pop_back();


}

int main(){

    int n,k;

    char word[100];
  
    struct Node * trieTree=(struct Node*)calloc(1,sizeof(struct Node));

    scanf("%d",&n);

    //Insert all the words into trie

    while(n--){

        scanf("%s",word);
        InsertWord(trieTree,word);

    }

    scanf("%d",&k);

    for(int i=1;i<=k;++i){

          scanf("%s",word);

          struct Node * temp=SearchWord(trieTree,word);
 
          printf("Case #%d:\n",i); 
       
          if(temp!=NULL){
                 
               bool childrenThere=false;

               //check if there are any children to the node

               for(int j=0;j<ALPHABETS;++j){

                     if(temp->children[j]!=NULL){

                          childrenThere=true;
                          break;

                     }
               }

               if(childrenThere){

                   vector<char> printUtil;

                   LexicographicalPrint(temp,printUtil,word);

               }

               else{

                   printf("No match.\n");

               }

          }
 
          else{

               printf("No match.\n");


          }

       }
                

    return 0;

}
