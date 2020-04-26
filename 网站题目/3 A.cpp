#include<iostream>
using namespace std;

int main()
{
    int n,s1,s2;
    while(cin>>n&&n!=0)
    {
        int f[n],z[n];
        for(int i=0; i<n; i++)
        {
            cin>>f[i];
            f[i]>0?z[i]=f[i]:z[i]=-f[i];
        }
        for(int j=0; j<n-1; j++)
        {
            for(int i=0;j+i<n; i++)
            {
                if(z[j]<z[j+i])
                {
                    s1=f[j+i];
                    f[j+i]=f[j];
                    f[j]=s1;
                    s2=z[j+i];
                    z[j+i]=z[j];
                    z[j]=s2;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<f[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
