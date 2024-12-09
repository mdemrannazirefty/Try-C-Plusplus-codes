#include<iostream>
using namespace std;

int i = 0;
class C 
{
	int a;
	int b;
public:
	C()
	{
		cout << "Default Constructor:" << i << endl;
	}
	C(int x)
	{
		a = x;
		cout << "Parameterized Constructor 1:" << i << endl;
	}
	C(int x, int y)
	{
		a = x;
		b = y;
		cout<< "Parameterized Constructor 2:" << i << endl;
	}
	~C()
	{
		cout << "Destructor:" << i <<endl;
	}
};

int main()
{
	cout << "Constructor Overloading!!"<<endl;
	C c1,c2(7),c3,c4(15,12);
	cout <<"HELLO!!" << endl;

	return 0;
}