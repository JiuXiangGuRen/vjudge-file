#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
   string s;
    getline(cin,s);
    //cout<<s<<endl;
    stringstream ss(s);
    int a[4];
    for(int i=0;i<4;i++)
    {
        ss>>a[i];
        cout<<a[i]<<endl;
        ss.get();
    }
    return 0;
}
