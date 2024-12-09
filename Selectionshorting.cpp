#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your array size: ";
    cin>>n;
    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Your array are [";
    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;

    for(int i=0;i<n;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp= a[i];
             a[i]=a[min];
            a[min]=temp;
        }

    }
    cout<<"Selection Shorted is: [";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}


