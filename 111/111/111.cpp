#include<iostream>
using namespace std;
int mian()
{
    int n = 6, k = 3;
    for (int i = 1; i < 5; i = i + 2)
    {
        cout << --n << endl;
    }

    return 0;
}