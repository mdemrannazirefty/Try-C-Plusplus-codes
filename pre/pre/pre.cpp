#include<iostream>
using namespace std;
int main()
{
	int a = 3, b, c, d, e;
	b = ++a;
	c = --a;
	d = a++;
	e = a--;
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e;
	return 0;
}

