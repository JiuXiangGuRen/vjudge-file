#include<iostream>
using namespace std;

int main()
{
    int a,i=0,j=0,k=0,l=0;
    while(cin>>a)
    {
        if(a==0){}
        else
        {
            float GG[a];
            while(i<a)
            {
                cin>>GG[i];
                GG[i]<0?l=l+1:l=l;
                GG[i]==0?j=j+1:j=j;
                GG[i]>0?k=k+1:k=k;
                i++;
            }
            cout<<l<<" "<<j<<" "<<k<<endl;
            i=j=k=l=0;
        }
    }
    return 0;
}
