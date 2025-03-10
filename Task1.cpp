#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int snum;
    string sname;
    int smark;

    cout<<"Enter student number: ";
    cin>>snum;

    ofstream MyFile;
    MyFile.open("StudentRecord.txt");

    for (int i=0; i<snum; i++)
    {
        cout<<"Enter Info no "<<i+1 <<endl;
        cout<<"Enter student name: ";
        cin>>sname;
        cout<<"Enter student Mark: ";
        cin>>smark;

        MyFile<<sname<<" " <<smark <<" "<<endl;

    }
    MyFile.close();

    string myText;
    ifstream MyReadFile("C://Users/student/Desktop/Efty/StudentRecord.txt");
    while(getline(MyReadFile,myText))
    {
        cout<<myText <<endl;

    }
    MyReadFile.close();

}

