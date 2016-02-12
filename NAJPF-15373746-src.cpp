#include<bits/stdc++.h>
using namespace std;

int lps[1000005];

vector<int> positions;
vector<int>::iterator it;

string text,pattern;

void computeprefixsuffixtable(string pattern){

    int index=0;

    for(int i=1;i<pattern.length();){

         if(pattern[i]==pattern[index]){

              lps[i]=index+1;

              index++;

              i++;


         }

         else{

              if(index!=0){

                  index=lps[index-1];

              }

              else{


                  lps[i]=0;
                  
                  i++;
 
              }

        }


    }


}

void KMP(string text,string pattern){

    int i=0,j=0;

    while(i<text.length()){

           
           if(text[i]==pattern[j]){

                ++i;
                ++j;

           }

           else{

                if(j!=0){

                     j=lps[j-1];

                }
                else{

                     ++i;
                }

           }

           if(j==pattern.length()){

                positions.push_back(i-pattern.length());
                j=0;
           }

    }

}

int main(){

      int t,i,count;

      cin>>t;

      while(t--){

         count=0;
        
         positions.clear();

         cin>>text>>pattern;

         int m=pattern.size();

         computeprefixsuffixtable(pattern);

        /* for(i=0;i<m;++i){

               printf("%d ",lps[i]);

         }  */

       //  printf("\n");

         KMP(text,pattern);

         int count=positions.size();
        
        if(count==0){

              printf("Not Found\n");
                

        }
         else{


             printf("%d\n",count);

             for(it=positions.begin();it!=positions.end();it++){


                  printf("%d ",*it+1);
    
                   
             }
             printf("\n");
 
         }

         printf("\n");
         
        
     }   

     return 0;
 
}
