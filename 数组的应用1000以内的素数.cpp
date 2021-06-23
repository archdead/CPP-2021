#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	bool prime = true;
	for (int i = 1; i < 1000; i++)
	{
		prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
				prime = false;
		}
		if (prime == true)
		cout << i << endl;
	}
	return 0;
}