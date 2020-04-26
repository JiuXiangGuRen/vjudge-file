#include<iostream>
using namespace std;

int main()
{
    int year,month,day,date=0;
    char a;
    while(cin>>year>>a>>month>>a>>day)
    {
        int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31},date=0;
        if((year%4==0&&year%100!=0)||(year%400==0))
        {
            arr[2]+=1;
        }
        if((month>=1&&month<=12)&&(day>=1&&day<=arr[month]))
        {
            for(int i=1; i<month; i++)
            {
                date+=arr[i];
            };
            date+=day;
            cout<<date<<endl;
        }
        else
        {
            cout<<"Error"<<endl;
        }
    }
    return 0;
}
