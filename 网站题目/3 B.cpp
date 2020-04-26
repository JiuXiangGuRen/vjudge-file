#include<iostream>
using namespace std;

int main()
{
    int n,s=0,h,f,t,five,two,o;
    while(cin>>n&&n!=0)
    {
        int r[n];
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
            h=r[i]/100;
            f=r[i]%100/50;
            t=r[i]%100%50/10;
            five=r[i]%10/5;
            two=r[i]%10%5/2;
            o=r[i]%10%5%2;
            s=s+h+f+t+five+two+o;
        }
        cout<<s<<endl;
    }
    return 0;
}
