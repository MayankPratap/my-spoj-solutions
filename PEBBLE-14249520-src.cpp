#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int counttest=0;
    while(cin>>str)
    {
        ++counttest;
        int i,flip=0;
        char key='1';
        for(i=0;i<str.size();++i)
        {
            if(str[i]==key)
            {
                ++flip;
                if(key=='1')
                    key='0';
                else
                    key='1';
            }
        }

        cout<<"Game #"<<counttest<<": "<<flip<<'\n';
    }
return 0;
}
