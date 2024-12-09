#include<iostream>
using namespace std;

class shape
{
public:
	int height;
	int width;
};

class triangel: public shape
{
	public:
	void displayt()
	{
		cout << "Area of tringle is:" <<(height*width)*1/2 << endl;
	}
};

class rectangle: public shape
{
	public:
	void displayr()
	{
		cout << "Area of rectangle is:" <<(height*width) << endl;
	}
};

int main()
{
    triangel t;
    rectangle r;
    t.displayt();
    r,displayr();

}
