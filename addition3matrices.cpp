#include<iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int ad[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter your 1st array value["<<i<<","<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter your 2nd array value["<<i<<","<<j<<"]"<<endl;
            cin>>b[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter your 3rd array value["<<i<<","<<j<<"]"<<endl;
            cin>>c[i][j];
        }
    }
    cout<<endl;
    cout<<"1st array is :" <<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<a[i][j]<<"\t";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"2nd array is :" <<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<b[i][j]<<"\t";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"3rd array is :" <<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<c[i][j]<<"\t";

        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        ad[i][j]=a[i][j]+b[i][j]+c[i][j];
        //cout<<ad[i][j] <<"\t";;

        }
    }
    cout<<endl;
    cout<<"Addition is :" <<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<ad[i][j]<<"\t";

        }
        cout<<endl;
    }



    return 0;
}
