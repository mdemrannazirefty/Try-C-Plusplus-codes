#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    int pass=1, a[6]={92, 82, 21, 16, 18, 95};
    cout<<"Input:"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if (a[j]<a[i])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
        pass++;
    }
    cout<<"Output:"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of Exchanges:"<<pass<<endl;
    return 0;
}
