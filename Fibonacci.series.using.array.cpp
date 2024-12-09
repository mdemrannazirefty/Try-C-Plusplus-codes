#include<iostream>
using namespace std;

int main()
{
     int n;

    cout<<"How many Fibonacci Number: ";
    cin>>n;

    int a[n];
    a[0]=0;
    a[1]=1;

    //ans= 0 1 1 2 3 5 8 13 21 34 55
    //a[i](index number)=a[i-1](2-1)(1)+a[i-2](2-2)(0)
    //for loot count (2 thk suru kore n prjnto)
    //index=index[1]+index[0]
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"Fibonacci Number are: ";
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
