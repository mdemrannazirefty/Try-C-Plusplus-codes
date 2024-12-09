#include<iostream>
using namespace std;
int main()
{
    float sum=0;
    int array1[2];
    float array2[2];
    for(int i=0;i<2;i++)
    {
        cout<<"enterge number"<<i+1<<"=";
        cin>>array1[i];
        sum=sum+array1[i];
    }
    cout<<sum;
      for(int i=0;i<2;i++)
    {
        cout<<"float number "<<i+1<<"=";
        cin>>array2[i];
        sum=sum+array2[i];
    }
    cout<<"enter sum is "<<sum;


    return 0;
}
