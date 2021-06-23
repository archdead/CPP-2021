#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j, k;
	i = 3;
	j = ++i;
	k = i++;
	cout << j << endl;
	cout << k << endl;
	return 0;
}