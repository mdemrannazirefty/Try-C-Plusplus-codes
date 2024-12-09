#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter your array size: ";
    cin>>n;
    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array are [";
    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;

    for(int i=0; i<n; i++)
    {
        int temp = a[i];
        int j= i-1;
        while(j>=0 && temp < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout<<"Insertion Sorted list is: [";

    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;
}
