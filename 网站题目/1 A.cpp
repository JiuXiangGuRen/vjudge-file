#include<iostream>

using namespace std;

int main()
{
    char a,b,c,gg;
    while(cin>>a>>b>>c)
    {
        if(int(a)>int(b)) {gg=a; a=b; b=gg;}
        if(int(a)>int(c)) {gg=a; a=c; c=gg;}
        if(int(b)>int(c)) {gg=b; b=c; c=gg;}
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
