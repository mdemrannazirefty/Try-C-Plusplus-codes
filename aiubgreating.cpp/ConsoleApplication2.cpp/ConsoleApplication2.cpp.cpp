#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter Your number:";
	cin >> x;

	if (x > 100 || x < 0)
	{
		cout << "Invalid Mark";
	}

	if (x>=90)
	{
		cout << "you got A+";
	}

	else if (x>=85 && x<=89)
	{
		cout << "you got A";
	}

	else if (x >= 80 && x <= 84)
	{
		cout << "you got B+";
	}

	else if (x >= 75 && x <= 79)
	{
		cout << "you got B";
	}

	else if (x >= 70 && x <= 74)
	{
		cout << "you got C+";
	}

	else if (x >= 65 && x <= 69)
	{
		cout << "you got C";
	}

	else if (x >= 60 && x <= 64)
	{
		cout << "you got D+";
	}

	else if (x >= 50 && x <= 59)
	{
		cout << "you got D";
	}

	else
	{
		cout << "fail";
	}

	return 0;
}