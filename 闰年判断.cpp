#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int year = 0;
	cout << "�������" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	cout << year << "������" << endl;
	else 
	cout << "��������" << endl;
	return 0;
}