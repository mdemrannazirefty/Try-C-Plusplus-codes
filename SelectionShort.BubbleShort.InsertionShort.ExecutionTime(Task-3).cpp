#include<iostream>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t selection_start_time = clock();
    clock_t insertion_start_time = clock();
    clock_t buble_start_time = clock();
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
    cout<<endl;

    //Selection Short.............................................................
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
    clock_t selection_end_time = clock();
    double sstime=double(selection_end_time - selection_start_time) / CLOCKS_PER_SEC;
    cout << "Execution time for Selection Shorted: "<<fixed <<sstime << setprecision(5) << " seconds" << endl;
    cout<<endl;

    //Insertion Short....................................................................
    for(int i=0; i<n; i++)
    {
        int temp = a[i];
        int j= i-1;
        while(j>=0 && temp < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout<<"Insertion Sorted list is: [";
    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;
    clock_t insertion_end_time = clock();
    double istime= double(insertion_end_time - insertion_start_time)/ CLOCKS_PER_SEC;
    cout << "Execution time for Insertion Shorted: "<<fixed <<istime << setprecision(5) << " seconds" << endl;
    cout<<endl;

    //Buble Short...........................................................................
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
                {
                    swap (a[j],a[j+1]);
                }
        }
    }
    cout<<"Bubble Shorted is: [";
    for (int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<"]"<<endl;
    clock_t buble_end_time = clock();
    double bstime=double(buble_end_time - buble_start_time) / CLOCKS_PER_SEC;
    cout << "Execution time for Buble Shorted: "<<fixed <<bstime << setprecision(5) << " seconds" << endl;
    cout<<endl;

    if(sstime>=istime && sstime>=bstime)
    {
        cout<<"Selection Short is highest execution time";
    }
    else if(istime>=sstime && istime>=bstime)
    {
        cout<<"Insertion Short is highest execution time";
    }
    else
    {
      cout<<"Buble Short is highest execution time";
    }
    cout<<endl;


    return 0;
}


