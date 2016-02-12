#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int e1,f1,s1,m1,e2,f2,s2,m2;
  while(cin>>e1>>f1>>s1>>m1>>e2>>f2>>s2>>m2)
  {

     if(e1==-1&&f1==-1&&s1==-1&&m1==-1&&e2==-1&&f2==-1&&s2==-1&&m2==-1)
     break;
     else
     {

        if(e1==0&&f1==0&&s1==0&&m1==0)
        cout<<0<<' '<<0<<' '<<0<<' '<<0<<'\n';
        else
        {

           int i;
           for(i=1;;++i)
          { 
             e1=e1-e2;
             f1=f1-f2;
             s1=s1-s2;
             m1=m1-m2;
             if(e1<=0&&f1<=0&&s1<=0&&m1<=0)
             {
               cout<<-e1<<' '<<-f1<<' '<<-s1<<' '<<-m1<<'\n';
               break;      
              }
           }

         }
     }

  }
return 0;
}
