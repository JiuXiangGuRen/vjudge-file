#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        int i=0;
        while(i<a)
        {
            double s=0,s1=0;
            int GG[a]= {},j=1;
            cin>>GG[i];
            while(j<=GG[i])
            {
                j%2==0?s1=-j:s1=j;
                s=s+1/s1;
                j++;
            }
            cout<<setiosflags(ios::fixed)<<setprecision(2);
            cout<<s;
            cout<<endl;
            i++;
        }
    }
    return 0;
}
