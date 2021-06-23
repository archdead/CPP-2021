#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i = 0, a = 1, b = 2, c = 3;
	i = ++a || ++b || c++;
	cout << i << endl;//1
	cout << a << endl;//1
	cout << b << endl;//2
	cout << c << endl;//3
	return 0;
}