#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string myText;
    ifstream MyReadFile("C://Users/student/Desktop/Efty/File.cpp");
    while(getline(MyReadFile,myText))
    {
        cout<<myText <<endl;
    }
    MyReadFile.close();

}
