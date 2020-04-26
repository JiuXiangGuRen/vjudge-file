#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        int GG[a],s=0;
        double s1=0.;
        int MAX=0,MIN=0;
        for(int i=0; i<a; i++)
        {
            cin>>GG[i];
            if(GG[i]>GG[MAX])
            {
                MAX=i;
            }
            if(GG[i]<GG[MIN])
            {
                MIN=i;
            }
        }
        GG[MAX]=GG[MIN]=0;
        for (int i=0; i<a; i++)
        {
            s=s+GG[i];
        }
        s1=double(s)/(a-2);
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<s1<<endl;
    }
    return 0;
}
