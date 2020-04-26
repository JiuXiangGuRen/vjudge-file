//条件(-39<=x<y<=50)使if判断语句的判断条件简化
#include <iostream>

using namespace std;

int main()
{
    int x,y,s;
    while (cin>>x>>y)
    {
        int i,j,n=0;
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
        {}
    }
    return 0;
}
