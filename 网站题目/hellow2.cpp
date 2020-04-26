#include <iostream>
#include <sstream>
//#include<cstring>
using namespace std;

int main()
{
    /*double  dVal;
    int     iVal;
    string  str;
    stringstream ss;
    // string -> double
    str = "    561   123.456789";
    ss << str;
    ss >> dVal;
    cout << "dVal: " << dVal << endl;
    // string -> int
    str = "654321";
    ss.clear();
    ss << str;
    ss >> iVal;
    cout << "iVal: " << iVal << endl;*/
    string s;
    cin>>s;
    stringstream ss(s);
    /*int a[4];
    for(int i=0; i<4; i++)
    {
        ss>>a[i];
        ss.get();
        ss.clear();
    }
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    //cout<<int (' ');*/
    double d;
    while(ss>>d)
    {
        cout<<d<<endl;
    }
    return 0;
}
