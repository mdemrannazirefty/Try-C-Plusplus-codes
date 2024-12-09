#include<iostream>
using namespace std;
int main()
{
    int size, i, j, num,arr[20], temp, first, last, middle;

    cout<<"Enter the Size: ";
    cin>>size;

    cout<<"Enter Array Elements: ";

    for(i=0; i<size; i++)
        cin>>arr[i];
    for(i=0; i<(size-1); i++)
    {
        for(j=0; j<(size-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"\nThe Sorted Array is:\n";


    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    cout<<"\n\nEnter The  Element to be Search: ";
    cin>>num;

    first = 0;
    last = (size-1);
    middle = (first+last)/2;

    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<num<<" Found at index "<<middle+1<<" in the sorted array";
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)

        cout<<"\nThe number, "<<num<<" is not found in given Array";

    cout<<endl;
    return 0;
}
