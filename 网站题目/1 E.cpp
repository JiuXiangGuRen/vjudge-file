#include<iostream>
using namespace std;

int main()
{
    float a;
    while(cin>>a)
    {
        if(a>=90&&a<=100){cout<<'A'<<endl;}
        if(a>=80&&a<=89){cout<<'B'<<endl;}
        if(a>=70&&a<=79){cout<<'C'<<endl;}
        if(a>=60&&a<=69){cout<<'D'<<endl;}
        if(a>=0&&a<=59){cout<<'E'<<endl;}
        if(a<0||a>100){cout<<"Score is error!"<<endl;}
    }
    return 0;
}
