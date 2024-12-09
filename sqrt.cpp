//start code
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double xa,xb,xc;
    cout<<"enter your 3 x value:";
    cin>>xa>>xb>>xc;

    double ya,yb,yc;
    cout<<"enter your 3 y value:";
    cin>>ya>>yb>>yc;

    double d;
    d=sqrt((xa-ya)*(xa-ya)+(xb-yb)*(xb-yb)+(xc-yc)*(xc-yc));
    cout<<"result is:"<<d;
    return 0;


}
