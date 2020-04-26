#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r,v;
    while(cin>>r)
    {
        r>0?r=r:r=-r;
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<r<<endl;
    }
    return 0;
}
