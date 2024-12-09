#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    //input array
    cout<<"Enter Your 10 Number: " <<endl;
    for(int i=0;i<10;i++)
    {
        cin>> arr[i];
    }
    //output
    cout<< "Your 10 Array are: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<""<<endl;

    for (int i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {
            //cout<<"Even:" ;
            cout<< arr[i] <<" is EVEN "<<endl;
        }
        else
        {
            cout<<arr[i] <<" is Odd "<<endl;
        }
    }







}
