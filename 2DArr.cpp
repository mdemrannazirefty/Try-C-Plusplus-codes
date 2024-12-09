#include<iostream>

using namespace std;

int main()
{
    int a[3][5];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<"Input value in array["<<i<<","<<j<<"]"<<endl;
           cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
          // cout<<"value in array["<<i<<","<<j<<"] :"<<a[i][j]<<endl;
          cout<<a[i][j]<<"\t";

        }
        cout<<endl;
    }

    return 0;
}
