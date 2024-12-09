#include<iostream>
using namespace std;
int main()

{
	int array1[2];
	float array2[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "enter int:" << endl;
		cin >> array1[i];
	}

	for (int j = 0; j < 2; j++)
	{
		cout << "enter float:" << endl;
		cin >> array2[j];
	}
	return 0;
}