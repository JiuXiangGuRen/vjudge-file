#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,s=0;
    int b,i=0;
    while(cin>>a>>b)
    {
        while(i<b)
        {
            s=s+a;
            a=sqrt(a);
            i++;
        }
        i=0;
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<s<<endl;
        s=0;
    }
    return 0;
}
