#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	while(true)
	{
		cout << "please enter a number." << endl;
		cin >> i;
		if (i == 0)
				break;
	}
	cout << i << endl;
	return 0;
}