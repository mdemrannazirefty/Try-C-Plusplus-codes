#include<iostream>
using namespace std;
int main()
{
    int n;


    cout<<"Number of Arr: ";
    cin>>n;
    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

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
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
}


