#include<iostream>
using namespace std;
int main()
{
    int a[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49}, n=25,temp,num,first,last,mid;

    cout<<"Enter The  Element to be Search: ";
    cin>>num;

    first = 0;
    last = (n-1);
    mid = (first+last)/2;

    while(first <= last)
    {
        if(a[mid]<num)
            first = mid+1;
        else if(a[mid]==num)
        {
            cout<<num<<" Found at index "<<mid+1<<" in given array";
            break;
        }
        else
            last = mid-1;
        mid = (first+last)/2;
    }
    if(first>last)

        cout<<num<<" not found in given Array";

    cout<<endl;
    return 0;
}
