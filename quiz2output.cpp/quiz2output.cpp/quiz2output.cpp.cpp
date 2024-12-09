#include<iostream>
using namespace std;

class A
{
private:
	int a, b, c, k;
public:
	void setAdd(int x, int y)
	{
		a = x;
		b = y;
		k = a - b;
	}
	void setAdd(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
		k = a + b + c;
	}
	void getAdd()
	{
		cout << "Result:" << endl;
		cout << k << endl;
	}
};

int main()
{
	cout << "Welcome Students!!" << endl;
	cout << "Function Overloading" << endl;
	A a1, a2;
	a1.setAdd(12, 10);
	a1.getAdd();
	a1.setAdd(12, 15, 11);
	a1.getAdd();
	a1.setAdd(22, 12);
	a1.getAdd();
	a1.setAdd(22,11,12);
	a1.getAdd();
	//cout<<"GOOD LUCK!!"<<endl;

	return 0;
}

