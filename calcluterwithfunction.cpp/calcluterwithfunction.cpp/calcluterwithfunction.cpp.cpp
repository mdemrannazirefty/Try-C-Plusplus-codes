#include<iostream>
using namespace std;

void plus1(float a, float b)
{
    double plus1 = a + b;
	cout << "your addition is: " << plus1 << endl;
}

void min(float a, float b)
{
    double min = a - b;
	cout << "your substraction is: " << min << endl;
}

void mul(float a, float b)
{
    double mul = a *b;
    cout << "your substraction is: " << mul << endl;
}

void div(float a,float b)
{
    double div = a/b;
	cout << "your dividation is: " << div << endl;
}

int main()
{
    float a, b;
    char oporator;
    cout << "enter your 2 number and oporator:";
    cin >> a >> oporator >> b;

    if (oporator == '+')
    {
        plus1(a,b);
    }

    if (oporator == '-')
    {
        min(a, b);
    }

    if (oporator == '*')
    {
        mul(a, b);
    }

    if (oporator == '/')
    {
        div(a, b);
    }
    return 0;
}
