#include<bits/stdc++.h>
#define ll long double
using namespace std;
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        long long n;
        cin>>n;
        ll a,b,c;
        a=(ll)1/(ll)(2*n+2);
        b=(ll)1/(ll)(2*n+4);
        c=(ll)1/(ll)(4);
        printf("%0.11Lf\n",c-a+b+0.5);
    }
    return 0;

}
