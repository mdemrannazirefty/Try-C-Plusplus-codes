#include<iostream>
using namespace std;
int main()
{
    int x;
    char y;


    cout<<"Enter A Integer number: ";
    cin>>y;

     if(isdigit(y)==false)
    {
        cout<<"ERROR"<<endl;
        return 0;
    }


    if(x%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }



    return 0;
}
