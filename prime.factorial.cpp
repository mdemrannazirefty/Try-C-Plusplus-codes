#include<iostream>
using namespace std;

int main()
{
    int x,y=0;
    long result = 1;
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
        {
            for (int i=1;i<=x;i++)
            {
                result *= i;
            }
            cout<<"prime number: " <<result <<endl;
        }
    else
    cout<<"Error! Not a prime number." <<endl;

    return 0;

}




