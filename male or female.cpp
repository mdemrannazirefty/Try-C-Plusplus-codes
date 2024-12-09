#include<iostream>
using namespace std;

int main()
{
    char x;

    cout<<"Enter Input M or F: ";
    cin>>x;

    if(x=='m'||x=='M')
        cout<<"Male";
    else if(x=='f'||x=='F')
        cout<<"Female";
    else
    {
        cout<<"Un";
    }


}
