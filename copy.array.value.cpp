#include<iostream>
using namespace std;

int main()
{
    int n;
    //input value
    cout<<"How many Array value: ";
    cin>>n;

    int arr[n];
    //input array
    cout<<"Enter Your All Array number: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //output take array
    cout<< "Your Array are: [ ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<"]"<<endl;

    int arr2[n];
    //copy all element from arr1 to arr2
    for (int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    cout<< "Your 2nd Array are: [ ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<"]"<<endl;
}
