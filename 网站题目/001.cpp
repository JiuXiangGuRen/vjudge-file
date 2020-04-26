#include <iostream>

using namespace std;

int main()
{
    int x,y,i,j,n=0,s;
    while (cin>>x>>y)
    {
        if(x!=0||y!=0)
        {
            for(i=x; i<=y; i++)
            {
                j=2;
                s=i*i+i+41;
                while (s%j!=0&&j<=s-1)
                {
                    j++;
                }
                if (j==s)
                {
                    n++;
                }
            }
            if (n==y-x+1)
            {
                cout<<"OK"<<endl;
            }
            else
            {
                cout<<"Sorry"<<endl;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}

