#include<iostream>
using namespace std;

class Base
{
public:
	void displayb()
	{
		cout << "I'm not a good coder. " << endl;
	}
};

class Derived :public Base
{
public:
	void displayd()
	{
		cout << "I'm learning code. " << endl;
	}
};

int main()
{
	Derived obj;
	obj.displayb();
	obj.displayd();

	return 0;
}