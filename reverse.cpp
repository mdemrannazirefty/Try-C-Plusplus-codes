#include <iostream>
using namespace std;

int main()
{
	int arr[10];

	//arr input
	cout<<"Enter 10 Value:" <<endl;
	for(int i=0;i<10;i++)
    {
        cin>> arr[i];
    }

    //arr output
    cout<<"Your 10 Array are: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i] <<" " ;
    }

    //for reverse
    cout<<" " <<endl;
    cout<<"Reverse Are: ";
    for(int i=9;i>=0;i--)
    {
        cout <<arr[i] <<" ";
    }



}
