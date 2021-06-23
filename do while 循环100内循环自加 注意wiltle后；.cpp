#include <iostream>
using namespace std;
int main()
{
	int i, sum = 0;
	i = 1;
	do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);
	cout << sum << endl;
	cout << i << endl;
	return 0;
}