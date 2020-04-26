#include <iostream>
using namespace std;

int main()
{
    int n,s,s1=1,i=1;
    while(cin>>n)
    {
        while(i<n)
        {
            s=2*(s1+1);
            s1=s;
            i++;
        }
        cout<<s<<endl;
        s1=i=1;
    }
    return 0;
}
