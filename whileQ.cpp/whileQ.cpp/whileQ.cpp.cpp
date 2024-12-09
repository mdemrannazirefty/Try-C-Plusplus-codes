#include<iostream>
using namespace std;
int main()

{
	int x = 4, y = 0, z;
	while (x >= 0)
	{
		x--;
		y++;
		cout << x << "'" << y << endl;

		if (x == y)
			continue;
	}
	return 0;
}