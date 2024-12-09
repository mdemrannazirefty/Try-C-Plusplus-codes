#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int arr1[n];
    int arr2[m];
    int arr3[m + n];
    int size = 0;

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
    cout<<endl <<"2nd Array are [";
    for (int j=0;j<m;j++)
    {
        cout<<arr2[j] <<" ";
    }
    cout<<"]" <<endl;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[size++] = arr1[i];
                break;
            }
        }
    }

    if (size == 0) {
        cout << "No common elements!" << endl;
    } else {
        cout << "The common elements are: ";
        for (int i = 0; i < size; i++) {
            cout << arr3[i] << " ";
        }
        cout << endl;
    }

    return 0;

}
