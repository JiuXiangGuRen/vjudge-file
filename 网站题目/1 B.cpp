#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1,y1,x2,y2,distance;
    while(cin>>x1>>y1>>x2>>y2)
    {
        distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        distance=sqrt(distance);
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<distance<<endl;
    }
    return 0;
}
