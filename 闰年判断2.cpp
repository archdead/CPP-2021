#include<iostream>
using namespace std;
int main()
{
	int year = 0;
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << "������" << endl;
			else
				cout << "��������" << endl;
		}
		else
			cout << "������" << endl;
	}
	else
		cout << "��������" << endl;
	return 0;
}