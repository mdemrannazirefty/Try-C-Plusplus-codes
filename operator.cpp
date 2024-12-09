#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter 1 number: ";
    cin>> a;

    cout<<"Enter 2nd number: ";
    cin>> b;

    int sum = a+b;
    cout<< "Your sum is: " <<sum <<endl;

    int sub = a-b;
    cout<< "Your sub is: " <<sub <<endl;

    int mul = a*b;
    cout<< "Your mul is: " <<mul <<endl;

    double dev = (float)a/b; //type casting
    cout<< "Your dev is: " <<dev <<endl;

    int rem = a%b;
    cout<< "Your rem is: " <<rem <<endl;

    return 0;
}
