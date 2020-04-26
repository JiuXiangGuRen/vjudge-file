#include <iostream>

using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
        {
        }
        else
        {
            long long s=0,arr[a];
            if(a<5)
            {
                s=a;
            }
            else
            {
                arr[0]=arr[1]=arr[2]=arr[3]=1;
                for(int i=4; i<a; i++)
                {
                    arr[i]=arr[i-1]+arr[i-3];
                }
                for(int i=0; i<a; i++)
                {
                    s=s+arr[i];
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
