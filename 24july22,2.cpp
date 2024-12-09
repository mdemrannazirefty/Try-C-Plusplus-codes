#include <iostream>
using namespace std;

void sum (float a, float b)
{
    cout<<"Your sum is:"<<sum<<endl;
}

void sub (float a, float b)
{
    cout<<"Your sum is:"<<sub<<endl;
}

void mal (float a, float b)
{
    cout<<"Your sum is:"<<mal<<endl;
}

void div (float a, float b)
{
    cout<<"Your sum is:"<<div<<endl;
}

    if (oporator=='+')
    {
        sum(a,b);
    }

    else if (oporator=='-')
    {
        sub(a,b);
    }

    else if (oporator=='*')
    {
        intu(a,b);
    }

    else if (oporator=='/')
    {
        div(a,b);
    }

    int main()

    float a,b;
    char oporator;
    cout<<"enter your 2 number and oporator:";
    cin>>a>>oporator>>b;
