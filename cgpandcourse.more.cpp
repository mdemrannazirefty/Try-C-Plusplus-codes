#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    int c;
    double cg;

};

int main()
{
    // storing information
    for(int i = 0; i < 10; ++i)
    {
        Student s[10];
        s[i].id = i+1;
        cout << "For student number " << i+1 << ":" << endl;

        cout<<"Unique ID= ";
        cin>>s[i].id;

        cout << "Enter Number of Credits Completed= ";
        cin >> s[i].c;

        cout << "Enter CGPA= ";
        cin >> s[i].cg;
        cout << endl;

        cout << "Student IDs with CGPA greater than 3.75:";
        for (int i = 0; i < 10; i++)
            {
                if (s[i].cg > 3.75 )
                {
                    cout << s[i].id << endl;
                }
            }
        cout << "Student IDs with more than 50 credits:";

        for (int i = 0; i < 10; i++)
            {
                if (s[i].c > 50)
                {
                    cout << s[i].id << endl;
                }
            }

    }

    return 0;
}

