#include <iostream>

using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
        {}
        else
        {
            int GG[a],s=0;
            int MIN=0;
            for(int i=0; i<a; i++)
            {
                cin>>GG[i];
                if(GG[i]<GG[MIN])
                {
                    MIN=i;
                }
            }
            s=GG[0];
            GG[0]=GG[MIN];
            GG[MIN]=s;
            for (int i=0; i<a; i++)
            {
                cout<<GG[i];
                if(i<a-1)
                    cout<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
