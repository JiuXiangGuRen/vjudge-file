#include<iostream>
using namespace std;

int main()
{
    int a,b,ones,tens,hundreds,s,g[5]={0};
    while(cin>>a>>b)
    {
        int i=a,j=0,k=0;
        while(i<=b)
        {
            hundreds=i/100;
            tens=i%100/10;
            ones=i%10;
          s=hundreds*hundreds*hundreds+tens*tens*tens+ones*ones*ones;
          if(s==i)
          {
              g[k]=s;
              k++;
              j++;
          }
          i++;
        }
        for(int l=0;l<k;l++)
        {
            cout<<g[l];
            if(l<k-1)
            cout<<" ";
        }
        if(j==0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<endl;
        }
        i=0,j=0;
    }
    return 0;
}
