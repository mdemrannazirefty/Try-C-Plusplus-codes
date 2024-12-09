//calcluter (+-/*)
#include<iostream>
using namespace std;

int main()
{
    float a,b;
    char oporator;
    cout<<"enter your 2 number and oporator:";
    cin>>a >>oporator >>b;

    if (oporator=='+')
    {
        cout<<"result:"<<(a+b)<<endl;
    }

    if (oporator=='-')
    {
        cout<<"result:"<<(a-b)<<endl;
    }

    if (oporator=='*')
    {
        cout<<"result:"<<(a*b)<<endl;
    }

    if (oporator=='/')
    {
        cout<<"result:"<<(a/b)<<endl;
    }
    else
    {
        cout<<"Error";
    }
}
