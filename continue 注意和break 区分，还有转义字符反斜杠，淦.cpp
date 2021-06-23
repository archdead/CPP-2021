#include <iostream>
using namespace std;
int main()
{
	int i,counter = 0;
	for (i = 1; i<=100; i++)
	{
		if(i%3==0||i%5==0||i%7==0)
			continue;//下面这些都不做了；
		cout << i << '\t';
		counter++;
		if (counter % 10 == 0)
			cout << endl;
	}
	cout << endl;
	return 0;
}