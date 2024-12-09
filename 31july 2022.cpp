#include<iostream>
using namespace std;

class shape
{
public:
	double height;
	double width;
};
class Rectangle:public shape
{
		void area()
    {
        cout << "Rectangle Area is:" <<(height*width) << endl;
    }

};

int main()
{
    double height;
	double width;
	Rectangle Obj;
	cout << "Enter Your Height:" <<height << endl;
		cin >> height;
		cout << "Enter Your Width:" <<width << endl;
		cin >> width;
    obj.area();

	return 0;
}





