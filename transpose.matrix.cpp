#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] ;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<"input value in array ["<<i <<","<<j <<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"Normal Matrix is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
          cout<<arr[i][j]<<"\t";

        }
        cout<<endl;
    }

    int arr2[4][3];

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            arr2[i][j]=arr[j][i];
        }
    }
    cout<< "Ans :" << endl;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }


}
