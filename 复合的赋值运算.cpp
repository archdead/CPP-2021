#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x = 2, y = 1, a = 3, z = 7;
	x*=y+8;
	a += 3;
	z %= 3;
	cout << x << endl;
	cout << a << endl;
	cout << z << endl;
	return 0;
}