#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter your array size: ";
    cin>>n;

    cout<<"Enter your array element: ";
    int a[n];

    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array are [";
    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;


    int exchange=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
                {
                    exchange++;
                    swap (a[j],a[j+1]);
                }
        }
    }
    cout<<"ans:";

    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<endl <<"Exchange :" <<exchange <<endl;
}
