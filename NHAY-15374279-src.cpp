#include<bits/stdc++.h>
using namespace std;

vector<int> positions;
vector<int>::iterator it;

string text,pattern;

int lps[1000005];

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
                  j=lps[j-1];

           }

     }

}

int main(){

     int m,i,j;

     while(scanf("%d",&m)!=EOF){

         cin>>pattern;
         cin>>text;

         positions.clear();

         computeprefixsuffixtable(pattern);

         KMP(text,pattern);

         int count=positions.size();

         if(count==0){

              printf("\n\n");

         }
       
         else{

               for(it=positions.begin();it!=positions.end();it++){

                      printf("%d\n",*it);

               }


         }
  
 
     }  
     return 0;
}
