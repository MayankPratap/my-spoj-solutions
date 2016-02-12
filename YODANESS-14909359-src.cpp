#include<bits/stdc++.h>
using namespace std;

long long merge(int l[],int r[],int a[],int nl,int nr){

    int i=0,j=0,k=0;

    long long inv_count=0;

    while(i<nl&&j<nr){

        if(l[i]<r[j]){

            a[k]=l[i];
            k++;
            i++;
 
        }
        else{

            a[k]=r[j];
            k++;
            j++;
            inv_count+=nl-i;

        }

    }
    while(i<nl){

         a[k]=l[i];
         k+=1;
         i+=1;    
    }

    while(j<nr){

         a[k]=r[j];
         k+=1;
         j+=1;
    }
   return inv_count;
}

long long mergesort(int *a,int n){

     if(n==1)
         return 0;

     int mid=n/2;
  
     long long inv_count=0;

     int *left,*right;

     left=(int*)malloc(mid*sizeof(int));
     right=(int*)malloc((n-mid)*sizeof(int));

    int i;

    for(i=0;i<mid;++i)
       left[i]=a[i];

    for(i=mid;i<n;++i)
       right[i-mid]=a[i];
   
    inv_count+=mergesort(left,mid);
    inv_count+=mergesort(right,n-mid);
    inv_count+=merge(left,right,a,mid,n-mid);
    return inv_count;


}

int main(){

   int t,n,i;
   cin>>t;
   
   

   while(t--){

        int a[30100];
        string str;
        scanf("%d",&n);
       
        vector<string> words;
        vector<string>::iterator vecit;       
 
        map<string,int> M;

        map<string,int>::iterator mapit;

        for(i=0;i<n;++i){
           
             cin>>str;
             words.push_back(str);
               
        }

        for(i=0;i<n;++i){

             cin>>str;
             M[str]=i;
        }

        for(i=0,vecit=words.begin();vecit!=words.end();vecit++,i++){

             mapit=M.find(*vecit);
             a[i]=mapit->second;

        }

        cout<<mergesort(a,n)<<'\n'; 
                             

   }
   return 0;

}
