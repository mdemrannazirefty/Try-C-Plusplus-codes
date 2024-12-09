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


    int com=0,exchange=0;
    for (int i=0;i<n;i++)
    {
        com++;
        for (int j=0;j<=n-1;j++)
            {
                if (a[i]>a[i+1])
                    {
                        swap (a[i],a[i+1]);
                        exchange++;
                    }

            }
    }
    cout<<"ans:";

    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<endl <<"Exchange :" <<exchange <<endl;
    cout<<"Com is: "<<com;
}
