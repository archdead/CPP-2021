#include<iostream>
#include<iomanip>
using namespace std;
int mian()
{

	unsigned int unsigned_int_a = 0xAAAAAAAA;
	cout << unsigned_int_a << endl;
	signed signed_int_a = unsigned_int_a;
	cout << hex << signed_int_a << endl;
	cout << dec << signed_int_a << endl;
	return 0;
}