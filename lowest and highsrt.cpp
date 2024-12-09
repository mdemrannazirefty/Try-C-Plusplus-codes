//lowest highst
#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"enter your 3 number:";
    cin>>x>>y>>z;

    if (x>y && x>z)
    {
       cout<<x <<"is higst number";
    }

    else if (x<y && x<z)
    {
       cout<<x <<"is lowest number";
    }

    else if (y>x && y>z)
    {
       cout<<y <<"is higst number";
    }

    else if (y<x && y<z)
    {
       cout<<y <<"is lowest number";
    }
    else if (z>x && z>y)
    {
       cout<<z <<"is higst number";
    }

    else if (z<x && z<y)
    {
       cout<<y <<"is lowest number";
    }
    else
    {
        cout<<"equal";
    }

    return 0;
}
