#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){

        int n,i,j;
        long long int a[100005];
        char diff[100005];
        scanf("%d",&n);
        for(i=0;i<n;++i)
        scanf("%lld",&a[i]);
        char msg[100005];
        scanf("%s",msg);
        int len=strlen(msg);
        for(i=1,j=0;i<n;++i,++j){
            
            if(a[i]-a[i-1]>0) diff[j]='G';
            else if(a[i]-a[i-1]<0) diff[j]='L';
            else diff[j]='E';
        }        
       diff[j]='\0';
       if(strstr(diff,msg))
           printf("YES\n");
       else
           printf("NO\n");
  }
return 0;
}

