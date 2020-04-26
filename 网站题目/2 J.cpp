#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {}
        else
        {
            int arr[a+1];
            for(int i=0; i<a; i++)
            {
                cin>>arr[i];
                if(b>arr[i])
                {
                    c=i+1;
                }
            }
            for(int i=a; i>=c; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[c]=b;
            for(int i=0; i<a+1; i++)
            {
                cout<<arr[i];
                if(i<a)
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
