#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int arr1[n];
    int arr2[m];

    cout<<"Enter Your 1st array size: ";
    cin>>n;

    cout<<"Enter your 1st array value= "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Your 2nd array size: ";
    cin>>m;

    cout<<"Enter your 2nd array value= "<<endl;
    for (int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    cout<<endl <<"1st Array are [";
    for (int i=0;i<n;i++)
    {
        cout<<arr1[i] <<" ";
    }
    cout<<"]";
    cout<<endl <<"2ndd Array are [";
    for (int j=0;j<m;j++)
    {
        cout<<arr2[j] <<" ";
    }
    cout<<"]" <<endl;

    //marge 2 array
    int arr3[100];
    for (int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for (int j=0;j<m;j++)
    {
       arr3[n+j]=arr2[j];
    }
    cout<<"2 array Marge are [";
    for (int k=0;k<n+m;k++)
    {
        cout<<arr3[k] <<" ";
    }
    cout<<"]"<<endl;

/*    //rev
    cout<<"Marge 2 array reverse are [";
    for (int x=n+m;x>=0;x++)
    {
        cout<<arr3[x] <<" ";
    }
    cout<<" ]";

*/

    return 0;
}
