#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	cout << i << endl;
	cout << ((i = i + 1)) << endl;
	cout << ((i = i + 1)) << endl;
	cout << i<< endl;
	return 0;
}