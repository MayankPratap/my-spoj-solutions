#include<iostream>
#include<string>
using namespace std;

int index[1000005];

int main(){

    int t,count,i;
    string txt,pat;
    cin>>t;
    while(t--){

            count=0;
            cin>>txt>>pat;
            int m=pat.size();
            int pos=txt.find(pat,0);
            while(pos!=string::npos){

                   index[count]=pos+1;
                   count++;
                   pos=txt.find(pat,pos+m);
            }
            if(count!=0){
                         
                   cout<<count<<endl;
                   for(i=0;i<count;i++){
                          
                          cout<<index[i]<<" ";

                   }
                    cout<<'\n';
            }
            else{
                  
                  cout<<"Not Found"<<'\n';
            }
            cout<<'\n';
    }
    return 0; 
}
