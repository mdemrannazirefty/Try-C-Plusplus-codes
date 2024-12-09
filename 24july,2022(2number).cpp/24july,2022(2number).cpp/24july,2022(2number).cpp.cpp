#include<iostream>
using namespace std;

class Addition
{
public:
	double x, y;
	void input()
	{
		cout << "Enter Your 2 Number: ";
		cin >> x >> y;
		cout << "Addition is: " << (x + y);
	}
};

int main()
{
	Addition obj;
	obj.input();

	return 0;
}
	