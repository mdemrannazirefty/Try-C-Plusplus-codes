#include<iostream>
using namespace std;

class shape
{
public:
	double x, y;
	void get()
	{
		cout << "Enter Height: ";
		cin >> x;
		cout << "Enter Width: ";
		cin >> y;
	}
};

class triangel : public shape
{
public:
	void displayt()
	{
		cout << "Area of Tringle is:" << double(x * y) * 1 / 2 << endl;
	}
};

class rectangle : public shape
{
public:
	void displayr()
	{
		cout << "Area of Rectangle is:" << double(x*y)  << endl;
	}
};

int main()
{
	triangel t;
	t.get();
	t.displayt();

	rectangle r;
	r.get();
	r.displayr();

	return 0;
}