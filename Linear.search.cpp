#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many Array: ";
    cin>>n;

    int arr[n];
    //input array
    cout<<"Enter Your Array number: ";
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

    //search for number
    int searchnumber,position=-1,index;

    cout<<"Type which number you want to Search: ";
    cin>>searchnumber;

    for(int i=0;i<=n;i++)
    {
        if(searchnumber==arr[i])
        {
            index=i;
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"Data not found in the array."<<endl;
    }
    else
    {
        cout<<"Search Index is: "<<index << ", and Position is: "<<position<<endl;
    }

}
