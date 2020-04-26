#include<iostream>
using namespace std;

int main()
{
    int a,b,c,s,s1=0,s2=0;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        s=b-a+1;
        int i=a;
        while(i>=a&&i<=b)
        {
            i%2==0?s1=s1+i*i:s2=s2+i*i*i;
            i++;
        }
        i=0;
        cout<<s1<<" "<<s2<<endl;
        s1=s2=0;
    }
    return 0;
}
