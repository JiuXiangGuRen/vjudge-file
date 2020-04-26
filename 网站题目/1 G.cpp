#include<iostream>
using namespace std;

int main()
{
    int a,s=1;
    while(cin>>a)
    {
        int GG[a],i=0;
        while(i<a)
        {
            cin>>GG[i];
            GG[i]%2==0?GG[i]=1:GG[i]=GG[i];
            i++;
        }
        i=0;
        while(i<a)
        {
            s=s*GG[i];
            i++;
        }
        cout<<s<<endl;
        s=1;
    }
    return 0;
}
