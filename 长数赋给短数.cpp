#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char char_a = ' ';
	int int_b = char_a;
	cout << int_b << endl;
	int int_a = 0x361;
	cout << hex << int_a << endl;
	cout << dec << int_a << endl;
	char_a = int_a;
	cout << char_a << endl;
	int c = char_a;
	cout << hex << c << endl;
	cout << dec << c << endl;
	return 0;
}