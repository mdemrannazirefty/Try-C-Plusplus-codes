#include <iostream>
using namespace std;

void namefunction(string name)
{
	cout << "My Name Is: " <<name <<endl;
}

void idfunction(int id)
{
	cout << "My ID Is: " <<"22-" << id << "-2" << endl;
}

void cgpfunction(float cgp)
{
	cout << "My CGP Is: " <<cgp<<endl;
}

int main()
{
	namefunction("MD.EMRAN NAZIR EFTY");
	idfunction(47802);
	cgpfunction(4.00);

	return 0;
}

