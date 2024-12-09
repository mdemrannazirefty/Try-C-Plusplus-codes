//greading number
#include<iostream>
using namespace std;

int main()
{
    int x,y=0;
    cout<<"enter your number:";
    cin>>x;

    for (int i=2;i<x;i++)
    {
        if (x%i==0)
        {
          y++;
        break;
        }
    }

    if (y==0)
    cout<<"prime number";

    else
    cout<<"not prime";

    return 0;

}




