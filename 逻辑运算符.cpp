#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 0, b = 0;
	a = 5 > 3 && 2 || 8 < 4 - (b = !0);
	cout <<"a="<< a << endl;
	cout << "b=" << b << endl;
	return 0;
}