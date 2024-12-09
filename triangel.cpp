#include<iostream>
using namespace std;

int main ()
{
    double base, hight, area;

    cout<< "Enter Your Base: ";
    cin>> base;

    cout<< "Enter Your Hight: ";
    cin>> hight;

    area = (double)1/2 * base * hight;
    cout<<"Result is: "<<area <<endl;

    return 0;
}
