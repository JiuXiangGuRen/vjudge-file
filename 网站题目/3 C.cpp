#include<iostream>
using namespace std;

int main()
{
    int n,m,x,y;
    while(cin>>m>>n)
    {
        int s[m*n],z[m*n],MAX=0;
        for(int i=0; i<m*n; i++)
        {
            cin>>s[i];
            s[i]>0?z[i]=s[i]:z[i]=-s[i];
        }
        for(int i=1; i<m*n; i++)
        {
            if(z[MAX]<z[i])
            {
                MAX=i;
            }
        }
        MAX++;
        MAX%n==0?x=MAX/n:x=MAX/n+1;
        MAX%n==0?y=n:y=MAX%n;
        cout<<x<<" "<<y<<" "<<s[MAX-1]<<endl;
    }
    return 0;
}
