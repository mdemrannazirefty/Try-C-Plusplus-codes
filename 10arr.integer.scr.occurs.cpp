#include<iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter 10 elements of the array: ";
    for (int i=0;i<10;i++)
    {
        cin>>arr[i];

    }
    int x,count=0;

    cout<<"Input a number to search: ";
    cin>>x;

    for(int i=0;i<10;i++)
    {
        if(x==arr[i])
        {
            count++;
        }
    }
    cout<< " The number occurs " << count << " times in the array." <<endl;


}
