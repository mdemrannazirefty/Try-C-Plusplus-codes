#include<iostream>
using namespace std;

void marks(int num)
{
	num = 50;
}
int main()
{
	int a = 30;
	cout << "Before calling:" << a << endl;
	marks(a);
	cout << "After calling:" << a;
	return 0;
}