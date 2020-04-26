#include<iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int s;
        n%m==0?s=n/m:s=n/m+1;
        double ss[s*m]= {0},v[s] {0};
        for(int i=0; i<n; i++)
        {
            ss[i]=2*(i+1);
        }
        for(int j=0; j<s; j++)
        {
            for(int i=0; i<m; i++)
            {
                v[j]=v[j]+ss[j*m+i];
            }
        }
        for(int j=0; j<s-1; j++)
        {
            v[j]=v[j]/m;
        }
        if(n%m==0)
        {
            v[s-1]=v[s-1]/m;
        }
        else
        {
            v[s-1]=v[s-1]/(n%m);
        }
        for(int i=0; i<s; i++)
        {
            cout<<v[i];
            if(i<s-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
