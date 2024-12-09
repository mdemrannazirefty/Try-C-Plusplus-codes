#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    float avg;

    cout<<"Enter number of student: ";
    cin>>n;

    int student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Array mark " <<i+1 <<":";
        cin>>student[i];
        sum=sum+student[i];
    }
    cout<<"Total: "<<sum <<endl;

    avg=float(sum/n);
    cout<<"Avg is: " <<avg <<endl;
    cout<<endl;

    //Maximum and minimum
    int max = student[0];
    int min = student[0];
    for(int i=1; i<n; i++)
    {
        if(max < student[i])
        {
            max = student[i];
        }

        if(min > student[i])
        {
            min = student[i];
        }
    }
    cout << "Maximum marks = " << max << endl;
    cout << "Minimum marks = " << min;
    cout<<endl;

    return 0;
}
