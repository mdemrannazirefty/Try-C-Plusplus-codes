#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,5,2,4,3};
    int x,position=-1;
    bool found=false;

    cout<<"Search value: ";
    cin>>x;

    for (int i=0;i<=5;i++)
    {
        if (x==a[i])
        {
            position=i+1;
            break;
        }
    }
    if (position==-1)
    {
        cout<<"error";
    }
    else
    {
         cout<<"position=" <<position;
    }
    return 0;
}
