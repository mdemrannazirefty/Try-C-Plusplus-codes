//greading number
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter your mark:";
    cin>>x;

    if (x>100 || x<0)
    {
        cout<<"invalid number:";
    }

    else if (x>=90 || x<=100)
    {
        cout<<"you got A+";
    }

    else if (x>=85 || x<=89)
    {
        cout<<"you got A";
    }

    else if (x>=80 || x<=84)
    {
        cout<<"you got B+";
    }

    else if (x>=75 || x<=79)
    {
        cout<<"you got B";
    }

    else if (x>=70 || x<=74)
    {
        cout<<"you got c";
    }

    else
    {
        cout<<"fail";
    }

    return 0;
}
