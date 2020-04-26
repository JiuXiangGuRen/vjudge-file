#include<iostream>
#include<cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int s[n*m],gg=0,ss=0;
        double v[n]= {0},g[m]= {0};
        for(int i=0; i<m*n; i++)
        {
            cin>>s[i];
        }
        for(int j=0; j<m; j++)
        {
            for(int i=0; i<n; i++)
            {
                g[j]=g[j]+s[j+m*i];
            }
            g[j]=g[j]/n;
        }
        for(int j=0; j<n; j++)
        {
            for(int i=0; i<m; i++)
            {
                v[j]=v[j]+s[m*j+i];
                if(s[m*j+i]>=g[i])
                {
                    gg++;
                }
            }
            v[j]=v[j]/m;
            gg==m?ss=ss+1:ss=ss;
            gg=0;
        }
        for(int i=0; i<n; i++)
        {
            printf("%.2lf",v[i]);
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;
        for(int i=0; i<m; i++)
        {
            printf("%.2lf",g[i]);
            if(i<m-1)
                cout<<" ";
        }
        cout<<endl<<ss<<endl<<endl;
    }
    return 0;
}
