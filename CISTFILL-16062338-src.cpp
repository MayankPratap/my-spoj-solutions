    #include <bits/stdc++.h>
    using namespace std;
    #define pb push_back
    #define lld I64d
    #define mp make_pair
    const double EPS=1e-9;
     
    double sHeight[50002],fHeight[50002],width[50002],depth[50002];
    int n;
     
    double ans(double lo,double hi,double VW){
     
         double mid;
         while(hi-lo>=1e-3){
     
                  mid=(lo+hi)/2;
     
                  double VF=0;  //Volume filled
     
                  for(int i=0;i<n;++i){
      
                       if(mid>sHeight[i]){
     
                              if(mid>fHeight[i])
                              	  VF+=(fHeight[i]-sHeight[i])*width[i]*depth[i];
                              else
                              	  VF+=(mid-sHeight[i])*width[i]*depth[i];
                       }
     
                  }
     
                  if(VF>=VW)
                       hi=mid;
     
                  else if(VF<VW)
                  	   lo=mid;
     
            
     
              }
     
               return hi;
     
     
     
    }
     
    int main(){
     
       int t;
     
       cin>>t;
     
       while(t--){
     
          double b,h,w,d,mins=10000000,maxf=0;
     
          //mins :--  minimum start height
          //maxf :-- maximum final height
     
          cin>>n;
     
          double VW,VC=0;  //Volume of water and volume of all cisterns
     
         
     
          for(int i=0;i<n;++i){
     
              cin>>b>>h>>w>>d;
              sHeight[i]=b;
              fHeight[i]=b+h;
              width[i]=w;
              depth[i]=d;
              VC+=h*w*d;
     
              if(sHeight[i]<mins)
              	 mins=sHeight[i];
     
              if(fHeight[i]>maxf)
                 maxf=fHeight[i];	
     
          }
     
          cin>>VW;
     
          if(VW>VC){
     
            cout<<"OVERFLOW\n";
     
          }
     
          else{
     
             printf("%0.2f\n",ans(mins,maxf,VW));
     
          }
     
       }
     
       return 0;
    }
     