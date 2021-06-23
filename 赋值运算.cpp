#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int int_a = 64.12345;
	char char_a = int_a;
	float float_a = char_a;
	bool bool_a = float_a;
	cout << showpoint << int_a << " " << char_a << " " << setprecision(7) << float_a << " " << bool_a << endl;
	return 0;
}