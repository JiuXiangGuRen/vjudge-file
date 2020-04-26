#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int a,c,s=0;
    string b;
    while(cin>>a)
    {
        for(int i=0; i<a; i++)
        {
            cin>>b;
            c=b.size();
            for(int j=0; j<c; j++)
            {
                if(b[j]>='0'&&b[j]<='9')
                {
                    s++;
                }
            }
            cout<<s<<endl;
            s=0;
        }
    }
    return 0;
}
