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

    int count=0,x;

    for(int i=0;i<10;i++)
    {
         x=arr[i];
         for(int j=0;j<=10;j++)
         {
             if(x==arr[j])
             count++;
         }
         cout<<x <<" occurs = " << count <<" times" <<endl;
    }



}
