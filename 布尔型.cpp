#include<iostream>
using namespace std;
int main()
{
	bool b1 = true, b2 = false;
	cout << "b1=true ʱ��b1=" << b1 << endl;
	cout << "b2=false  ʱ��b2=" << b2 << endl;
	b1 = 7 > 3;
	b2 = -100;
	cout << "b1=7>3 ʱ��b1=" << b1 << endl;
	cout << "b2=-100ʱ��b2=" << b2 << endl;
	return 0;
}