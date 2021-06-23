#include<iostream>
#include<iomanip>
using namespace std;
int mian()
{

	short int short_i =-123;
	cout << hex << short_i << endl;
	long int long_j = short_i;
	cout << hex << long_j << endl;
	cout << dec << long_j << endl;
	return 0;
}